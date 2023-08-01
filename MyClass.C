#define MyClass_cxx
#include "MyClass.h"
#include <TH2.h>
#include <TFile.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>
#include <TH1.h>
#include <iostream>
#include <time.h>
#include <chrono>  // for high_resolution_clock


using namespace std;

void MyClass::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MyClass.C
//      root> MyClass t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   auto start = std::chrono::steady_clock::now();
   
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   TFile *fnew = new TFile("HistFiles/muonAnalysis_data22_Conventional.root","RECREATE");
   fnew->cd();
   TH1F *dimuon_mass_reco = new TH1F("dimuon_mass_reco",";m_{#mu#mu} [GeV];",150,0,150);
   TH1F *dimuon_mass_medium = new TH1F("dimuon_mass_medium",";m_{#mu#mu} [GeV];",150,0,150);
   TH1F *nprecisionLayers = new TH1F("nprecisionLayers",";Number of precision layers;",8,0,8);
   TH1F *qOverPsignif = new TH1F("qOverPsignif",";q/p significance;",50,0,10);

   TLorentzVector tlv1;
   TLorentzVector tlv2;

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      if(jentry%10000==0) cout << "Processed: " << jentry << endl; 
      //cout << "muon size:  " << muon_pt->size() << endl;    
      if(muon_pt->size() < 2) continue;
      if(muon_pt->at(0) < 25.) continue;

      tlv1.SetPtEtaPhiE(muon_pt->at(0),muon_eta->at(0),muon_phi->at(0),muon_e->at(0));
      tlv2.SetPtEtaPhiE(muon_pt->at(1),muon_eta->at(1),muon_phi->at(1),muon_e->at(1));

      dimuon_mass_reco->Fill((tlv1+tlv2).M());

      if(!muon_Medium->at(0) || !muon_Medium->at(1)) continue;

      dimuon_mass_medium->Fill((tlv1+tlv2).M());

      // assume subleading muon as probe
      nprecisionLayers->Fill(muon_nprecisionLayers->at(1));
      qOverPsignif->Fill(muon_qOverPsignif->at(1));
   }
   /*
   TCanvas* c_dimuon_mass_reco = new TCanvas("c_dimuon_mass_reco");
   dimuon_mass_reco->Draw();

   TCanvas* c_dimuon_mass_medium = new TCanvas("c_dimuon_mass_medium");
   dimuon_mass_medium->Draw();

   TCanvas* c_nprecisionLayers = new TCanvas("c_nprecisionLayers");
   nprecisionLayers->Draw();

   TCanvas* c_qOverPsignif = new TCanvas("c_qOverPsignif");
   qOverPsignif->Draw();
   */
   fnew->Write();

   // Record end time
   auto finish = std::chrono::steady_clock::now();
   auto diff = finish - start;
   std::cout << "Elapsed time : " << chrono::duration <double, milli> (diff).count()/1000.0 << " s" << endl;
}
