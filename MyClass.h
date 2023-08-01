//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jul  6 15:05:07 2023 by ROOT version 6.26/08
// from TTree analysis/My analysis tree
// found on file: submitDir-2023-07-06-1319-59f6/data-ANALYSIS/data23_13p6TeV.00451896.physics_Main.deriv.DAOD_PHYS.f1352_m2171_p5632.root
//////////////////////////////////////////////////////////

#ifndef MyClass_h
#define MyClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

class MyClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          RunNumber;
   UInt_t          LumiBlock;
   ULong64_t       EventNumber;
   Float_t         mcEventWeight;
   Float_t         actualInteractionsPerCrossing;
   Float_t         averageInteractionsPerCrossing;
   vector<float>   *muon_e;
   vector<float>   *muon_pt;
   vector<float>   *muon_eta;
   vector<float>   *muon_phi;
   vector<float>   *muon_charge;
   vector<char>    *muon_Tight;
   vector<char>    *muon_Medium;
   vector<char>    *muon_Loose;
   vector<char>    *muon_VeryLoose;
   vector<char>    *muon_HighPt;
   vector<char>    *muon_LowPt;
   vector<char>    *muon_LowPtMVA;
   vector<int>     *muon_quality;
   vector<char>    *muon_passPresel;
   vector<char>    *muon_passIDhits;
   vector<char>    *muon_isBadMuon_highPt;
   vector<char>    *muon_isBadMuon_other;
   vector<int>     *muon_muonType;
   vector<int>     *muon_author;
   vector<unsigned short> *muon_allAuthors;
   vector<float>   *muon_IDeta;
   vector<int>     *muon_PixHits;
   vector<int>     *muon_PixDead;
   vector<int>     *muon_SCTHits;
   vector<int>     *muon_SCTDead;
   vector<int>     *muon_PixHoles;
   vector<int>     *muon_SCTHoles;
   vector<int>     *muon_TRTHits;
   vector<int>     *muon_TRTOut;
   vector<int>     *muon_combinedTrackOutBoundsPrecisionHits;
   vector<int>     *muon_nprecisionLayers;
   vector<int>     *muon_nprecisionHoleLayers;
   vector<int>     *muon_nprecisionLayerswoNSW;
   vector<float>   *muon_mePt;
   vector<float>   *muon_idPt;
   vector<float>   *muon_cbPt;
   vector<float>   *muon_meP;
   vector<float>   *muon_idP;
   vector<float>   *muon_meqOverP;
   vector<float>   *muon_idqOverP;
   vector<float>   *muon_cbqOverP;
   vector<float>   *muon_meqOverPsigma;
   vector<float>   *muon_idqOverPsigma;
   vector<float>   *muon_cbqOverPsigma;
   vector<float>   *muon_rho;
   vector<float>   *muon_qOverPsigma;
   vector<float>   *muon_qOverPsignif;
   vector<float>   *muon_reducedChi2;
   vector<float>   *muon_idreducedChi2;
   vector<float>   *muon_mereducedChi2;
   vector<int>     *muon_innerSmallHits;
   vector<int>     *muon_innerLargeHits;
   vector<int>     *muon_middleSmallHits;
   vector<int>     *muon_middleLargeHits;
   vector<int>     *muon_outerSmallHits;
   vector<int>     *muon_outerLargeHits;
   vector<float>   *muon_rhoCut_lowPt;
   vector<float>   *muon_qOverPCut_lowPt;
   vector<float>   *muon_rhoCut_mediumPt;
   vector<float>   *muon_rhoCut_highPt;
   vector<float>   *muon_caloMuonIDTag;
   vector<float>   *muon_caloMuonScore;
   vector<int>     *muon_nGoodPrecLayers;
   vector<int>     *muon_extendedSmallHits;
   vector<int>     *muon_extendedLargeHits;
   vector<int>     *muon_extendedSmallHoles;
   vector<int>     *muon_isSmallGoodSectors;
   vector<int>     *muon_cscUnspoiledEtaHits;
   vector<float>   *muon_etaMS;
   vector<float>   *muon_phiMS;
   vector<float>   *muon_etaCB;
   vector<char>    *muon_isBIS78;
   vector<char>    *muon_isBMG;
   vector<char>    *muon_isBEE;
   vector<float>   *muon_momentumBalanceSig;
   vector<float>   *muon_scatteringCurvatureSig;
   vector<float>   *muon_scatteringNeighbourSig;
   vector<float>   *muon_energyLoss;
   vector<int>     *muon_energyLossType;
   vector<float>   *muon_muonSegmentDeltaEta;
   vector<int>     *muon_middleHoles;
   vector<float>   *muon_muonSeg1ChamberIdx;
   vector<float>   *muon_muonSeg2ChamberIdx;
   vector<float>   *muon_muonSeg3ChamberIdx;
   vector<float>   *muon_muonSeg4ChamberIdx;
   vector<float>   *muon_ptvarcone20;
   vector<float>   *muon_ptvarcone30;
   vector<float>   *muon_ptvarcone40;
   vector<float>   *muon_topoetcone20;
   vector<float>   *muon_topoetcone30;
   vector<float>   *muon_topoetcone40;
   vector<float>   *muon_ptcone20;
   vector<float>   *muon_ptcone30;
   vector<float>   *muon_ptcone40;
   vector<float>   *muon_neflowisol20;
   vector<float>   *muon_CaloMuonScore;
   vector<unsigned char> *muon_phiLayer1RPCHits;
   vector<unsigned char> *muon_phiLayer2RPCHits;
   vector<unsigned char> *muon_phiLayer3RPCHits;
   vector<unsigned char> *muon_phiLayer4RPCHits;
   vector<unsigned char> *muon_etaLayer1RPCHits;
   vector<unsigned char> *muon_etaLayer2RPCHits;
   vector<unsigned char> *muon_etaLayer3RPCHits;
   vector<unsigned char> *muon_etaLayer4RPCHits;
   vector<unsigned char> *muon_phiLayer1RPCHoles;
   vector<unsigned char> *muon_phiLayer2RPCHoles;
   vector<unsigned char> *muon_phiLayer3RPCHoles;
   vector<unsigned char> *muon_phiLayer4RPCHoles;
   vector<unsigned char> *muon_etaLayer1RPCHoles;
   vector<unsigned char> *muon_etaLayer2RPCHoles;
   vector<unsigned char> *muon_etaLayer3RPCHoles;
   vector<unsigned char> *muon_etaLayer4RPCHoles;
   vector<unsigned char> *muon_phiLayer1TGCHits;
   vector<unsigned char> *muon_phiLayer2TGCHits;
   vector<unsigned char> *muon_phiLayer3TGCHits;
   vector<unsigned char> *muon_phiLayer4TGCHits;
   vector<unsigned char> *muon_etaLayer1TGCHits;
   vector<unsigned char> *muon_etaLayer2TGCHits;
   vector<unsigned char> *muon_etaLayer3TGCHits;
   vector<unsigned char> *muon_etaLayer4TGCHits;
   vector<unsigned char> *muon_phiLayer1TGCHoles;
   vector<unsigned char> *muon_phiLayer2TGCHoles;
   vector<unsigned char> *muon_phiLayer3TGCHoles;
   vector<unsigned char> *muon_phiLayer4TGCHoles;
   vector<unsigned char> *muon_etaLayer1TGCHoles;
   vector<unsigned char> *muon_etaLayer2TGCHoles;
   vector<unsigned char> *muon_etaLayer3TGCHoles;
   vector<unsigned char> *muon_etaLayer4TGCHoles;
   vector<unsigned char> *muon_phiLayer1STGCHits;
   vector<unsigned char> *muon_phiLayer2STGCHits;
   vector<unsigned char> *muon_etaLayer1STGCHits;
   vector<unsigned char> *muon_etaLayer2STGCHits;
   vector<unsigned char> *muon_phiLayer1STGCHoles;
   vector<unsigned char> *muon_phiLayer2STGCHoles;
   vector<unsigned char> *muon_etaLayer1STGCHoles;
   vector<unsigned char> *muon_etaLayer2STGCHoles;
   vector<unsigned char> *muon_MMHits;
   vector<unsigned char> *muon_MMHoles;
   vector<unsigned char> *muon_cscEtaHits;
   vector<float>   *muon_idtrk_d0;
   vector<float>   *muon_cbtrk_d0;
   vector<char>    *muon_iso_Tight;
   vector<char>    *muon_iso_Loose;
   vector<char>    *muon_iso_PflowTight;
   vector<char>    *muon_iso_PflowLoose;
   vector<float>   *muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500;
   vector<float>   *muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000;
   vector<float>   *muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500;
   vector<float>   *muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000;
   vector<float>   *muon_IsoCloseByCorr_assocClustEta;
   vector<float>   *muon_IsoCloseByCorr_assocClustPhi;
   vector<float>   *muon_IsoCloseByCorr_assocClustEnergy;
   vector<char>    *muon_IsoCloseByCorr_assocClustDecor;
   vector<float>   *muon_IsoCloseByCorr_assocPflowEta;
   vector<float>   *muon_IsoCloseByCorr_assocPflowPhi;
   vector<float>   *muon_IsoCloseByCorr_assocPflowEnergy;
   vector<char>    *muon_IsoCloseByCorr_assocPflowDecor;
   vector<float>   *muon_DFCommonJetDr;
   vector<int>     *muon_truthType;
   vector<int>     *muon_truthOrigin;
   vector<int>     *muon_truthIFFType;
   vector<int>     *muon_truthmuon_index;
   vector<float>   *truthmuon_e;
   vector<float>   *truthmuon_pt;
   vector<float>   *truthmuon_eta;
   vector<float>   *truthmuon_phi;
   vector<float>   *truthmuon_charge;
   vector<int>     *truthmuon_pdgId;
   vector<int>     *truthmuon_type;
   vector<int>     *truthmuon_origin;
   vector<int>     *truthmuon_IFFType;
   vector<int>     *truthmuon_muon_index;

   // List of branches
   TBranch        *b_RunNumber;   //!
   TBranch        *b_LumiBlock;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_mcEventWeight;   //!
   TBranch        *b_actualInteractionsPerCrossing;   //!
   TBranch        *b_averageInteractionsPerCrossing;   //!
   TBranch        *b_muon_e;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_charge;   //!
   TBranch        *b_muon_Tight;   //!
   TBranch        *b_muon_Medium;   //!
   TBranch        *b_muon_Loose;   //!
   TBranch        *b_muon_VeryLoose;   //!
   TBranch        *b_muon_HighPt;   //!
   TBranch        *b_muon_LowPt;   //!
   TBranch        *b_muon_LowPtMVA;   //!
   TBranch        *b_muon_quality;   //!
   TBranch        *b_muon_passPresel;   //!
   TBranch        *b_muon_passIDhits;   //!
   TBranch        *b_muon_isBadMuon_highPt;   //!
   TBranch        *b_muon_isBadMuon_other;   //!
   TBranch        *b_muon_muonType;   //!
   TBranch        *b_muon_author;   //!
   TBranch        *b_muon_allAuthors;   //!
   TBranch        *b_muon_IDeta;   //!
   TBranch        *b_muon_PixHits;   //!
   TBranch        *b_muon_PixDead;   //!
   TBranch        *b_muon_SCTHits;   //!
   TBranch        *b_muon_SCTDead;   //!
   TBranch        *b_muon_PixHoles;   //!
   TBranch        *b_muon_SCTHoles;   //!
   TBranch        *b_muon_TRTHits;   //!
   TBranch        *b_muon_TRTOut;   //!
   TBranch        *b_muon_combinedTrackOutBoundsPrecisionHits;   //!
   TBranch        *b_muon_nprecisionLayers;   //!
   TBranch        *b_muon_nprecisionHoleLayers;   //!
   TBranch        *b_muon_nprecisionLayerswoNSW;   //!
   TBranch        *b_muon_mePt;   //!
   TBranch        *b_muon_idPt;   //!
   TBranch        *b_muon_cbPt;   //!
   TBranch        *b_muon_meP;   //!
   TBranch        *b_muon_idP;   //!
   TBranch        *b_muon_meqOverP;   //!
   TBranch        *b_muon_idqOverP;   //!
   TBranch        *b_muon_cbqOverP;   //!
   TBranch        *b_muon_meqOverPsigma;   //!
   TBranch        *b_muon_idqOverPsigma;   //!
   TBranch        *b_muon_cbqOverPsigma;   //!
   TBranch        *b_muon_rho;   //!
   TBranch        *b_muon_qOverPsigma;   //!
   TBranch        *b_muon_qOverPsignif;   //!
   TBranch        *b_muon_reducedChi2;   //!
   TBranch        *b_muon_idreducedChi2;   //!
   TBranch        *b_muon_mereducedChi2;   //!
   TBranch        *b_muon_innerSmallHits;   //!
   TBranch        *b_muon_innerLargeHits;   //!
   TBranch        *b_muon_middleSmallHits;   //!
   TBranch        *b_muon_middleLargeHits;   //!
   TBranch        *b_muon_outerSmallHits;   //!
   TBranch        *b_muon_outerLargeHits;   //!
   TBranch        *b_muon_rhoCut_lowPt;   //!
   TBranch        *b_muon_qOverPCut_lowPt;   //!
   TBranch        *b_muon_rhoCut_mediumPt;   //!
   TBranch        *b_muon_rhoCut_highPt;   //!
   TBranch        *b_muon_caloMuonIDTag;   //!
   TBranch        *b_muon_caloMuonScore;   //!
   TBranch        *b_muon_nGoodPrecLayers;   //!
   TBranch        *b_muon_extendedSmallHits;   //!
   TBranch        *b_muon_extendedLargeHits;   //!
   TBranch        *b_muon_extendedSmallHoles;   //!
   TBranch        *b_muon_isSmallGoodSectors;   //!
   TBranch        *b_muon_cscUnspoiledEtaHits;   //!
   TBranch        *b_muon_etaMS;   //!
   TBranch        *b_muon_phiMS;   //!
   TBranch        *b_muon_etaCB;   //!
   TBranch        *b_muon_isBIS78;   //!
   TBranch        *b_muon_isBMG;   //!
   TBranch        *b_muon_isBEE;   //!
   TBranch        *b_muon_momentumBalanceSig;   //!
   TBranch        *b_muon_scatteringCurvatureSig;   //!
   TBranch        *b_muon_scatteringNeighbourSig;   //!
   TBranch        *b_muon_energyLoss;   //!
   TBranch        *b_muon_energyLossType;   //!
   TBranch        *b_muon_muonSegmentDeltaEta;   //!
   TBranch        *b_muon_middleHoles;   //!
   TBranch        *b_muon_muonSeg1ChamberIdx;   //!
   TBranch        *b_muon_muonSeg2ChamberIdx;   //!
   TBranch        *b_muon_muonSeg3ChamberIdx;   //!
   TBranch        *b_muon_muonSeg4ChamberIdx;   //!
   TBranch        *b_muon_ptvarcone20;   //!
   TBranch        *b_muon_ptvarcone30;   //!
   TBranch        *b_muon_ptvarcone40;   //!
   TBranch        *b_muon_topoetcone20;   //!
   TBranch        *b_muon_topoetcone30;   //!
   TBranch        *b_muon_topoetcone40;   //!
   TBranch        *b_muon_ptcone20;   //!
   TBranch        *b_muon_ptcone30;   //!
   TBranch        *b_muon_ptcone40;   //!
   TBranch        *b_muon_neflowisol20;   //!
   TBranch        *b_muon_CaloMuonScore;   //!
   TBranch        *b_muon_phiLayer1RPCHits;   //!
   TBranch        *b_muon_phiLayer2RPCHits;   //!
   TBranch        *b_muon_phiLayer3RPCHits;   //!
   TBranch        *b_muon_phiLayer4RPCHits;   //!
   TBranch        *b_muon_etaLayer1RPCHits;   //!
   TBranch        *b_muon_etaLayer2RPCHits;   //!
   TBranch        *b_muon_etaLayer3RPCHits;   //!
   TBranch        *b_muon_etaLayer4RPCHits;   //!
   TBranch        *b_muon_phiLayer1RPCHoles;   //!
   TBranch        *b_muon_phiLayer2RPCHoles;   //!
   TBranch        *b_muon_phiLayer3RPCHoles;   //!
   TBranch        *b_muon_phiLayer4RPCHoles;   //!
   TBranch        *b_muon_etaLayer1RPCHoles;   //!
   TBranch        *b_muon_etaLayer2RPCHoles;   //!
   TBranch        *b_muon_etaLayer3RPCHoles;   //!
   TBranch        *b_muon_etaLayer4RPCHoles;   //!
   TBranch        *b_muon_phiLayer1TGCHits;   //!
   TBranch        *b_muon_phiLayer2TGCHits;   //!
   TBranch        *b_muon_phiLayer3TGCHits;   //!
   TBranch        *b_muon_phiLayer4TGCHits;   //!
   TBranch        *b_muon_etaLayer1TGCHits;   //!
   TBranch        *b_muon_etaLayer2TGCHits;   //!
   TBranch        *b_muon_etaLayer3TGCHits;   //!
   TBranch        *b_muon_etaLayer4TGCHits;   //!
   TBranch        *b_muon_phiLayer1TGCHoles;   //!
   TBranch        *b_muon_phiLayer2TGCHoles;   //!
   TBranch        *b_muon_phiLayer3TGCHoles;   //!
   TBranch        *b_muon_phiLayer4TGCHoles;   //!
   TBranch        *b_muon_etaLayer1TGCHoles;   //!
   TBranch        *b_muon_etaLayer2TGCHoles;   //!
   TBranch        *b_muon_etaLayer3TGCHoles;   //!
   TBranch        *b_muon_etaLayer4TGCHoles;   //!
   TBranch        *b_muon_phiLayer1STGCHits;   //!
   TBranch        *b_muon_phiLayer2STGCHits;   //!
   TBranch        *b_muon_etaLayer1STGCHits;   //!
   TBranch        *b_muon_etaLayer2STGCHits;   //!
   TBranch        *b_muon_phiLayer1STGCHoles;   //!
   TBranch        *b_muon_phiLayer2STGCHoles;   //!
   TBranch        *b_muon_etaLayer1STGCHoles;   //!
   TBranch        *b_muon_etaLayer2STGCHoles;   //!
   TBranch        *b_muon_MMHits;   //!
   TBranch        *b_muon_MMHoles;   //!
   TBranch        *b_muon_cscEtaHits;   //!
   TBranch        *b_muon_idtrk_d0;   //!
   TBranch        *b_muon_cbtrk_d0;   //!
   TBranch        *b_muon_iso_Tight;   //!
   TBranch        *b_muon_iso_Loose;   //!
   TBranch        *b_muon_iso_PflowTight;   //!
   TBranch        *b_muon_iso_PflowLoose;   //!
   TBranch        *b_muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500;   //!
   TBranch        *b_muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000;   //!
   TBranch        *b_muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500;   //!
   TBranch        *b_muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000;   //!
   TBranch        *b_muon_IsoCloseByCorr_assocClustEta;   //!
   TBranch        *b_muon_IsoCloseByCorr_assocClustPhi;   //!
   TBranch        *b_muon_IsoCloseByCorr_assocClustEnergy;   //!
   TBranch        *b_muon_IsoCloseByCorr_assocClustDecor;   //!
   TBranch        *b_muon_IsoCloseByCorr_assocPflowEta;   //!
   TBranch        *b_muon_IsoCloseByCorr_assocPflowPhi;   //!
   TBranch        *b_muon_IsoCloseByCorr_assocPflowEnergy;   //!
   TBranch        *b_muon_IsoCloseByCorr_assocPflowDecor;   //!
   TBranch        *b_muon_DFCommonJetDr;   //!
   TBranch        *b_muon_truthType;   //!
   TBranch        *b_muon_truthOrigin;   //!
   TBranch        *b_muon_truthIFFType;   //!
   TBranch        *b_muon_truthmuon_index;   //!
   TBranch        *b_truthmuon_e;   //!
   TBranch        *b_truthmuon_pt;   //!
   TBranch        *b_truthmuon_eta;   //!
   TBranch        *b_truthmuon_phi;   //!
   TBranch        *b_truthmuon_charge;   //!
   TBranch        *b_truthmuon_pdgId;   //!
   TBranch        *b_truthmuon_type;   //!
   TBranch        *b_truthmuon_origin;   //!
   TBranch        *b_truthmuon_IFFType;   //!
   TBranch        *b_truthmuon_muon_index;   //!

   MyClass(TTree *tree=0);
   virtual ~MyClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef MyClass_cxx
MyClass::MyClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("submitDir-2023-07-06-1319-59f6/data-ANALYSIS/data23_13p6TeV.00451896.physics_Main.deriv.DAOD_PHYS.f1352_m2171_p5632.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("submitDir-2023-07-06-1319-59f6/data-ANALYSIS/data23_13p6TeV.00451896.physics_Main.deriv.DAOD_PHYS.f1352_m2171_p5632.root");
      }
      f->GetObject("analysis",tree);

   }
   Init(tree);
}

MyClass::~MyClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t MyClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t MyClass::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void MyClass::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   muon_e = 0;
   muon_pt = 0;
   muon_eta = 0;
   muon_phi = 0;
   muon_charge = 0;
   muon_Tight = 0;
   muon_Medium = 0;
   muon_Loose = 0;
   muon_VeryLoose = 0;
   muon_HighPt = 0;
   muon_LowPt = 0;
   muon_LowPtMVA = 0;
   muon_quality = 0;
   muon_passPresel = 0;
   muon_passIDhits = 0;
   muon_isBadMuon_highPt = 0;
   muon_isBadMuon_other = 0;
   muon_muonType = 0;
   muon_author = 0;
   muon_allAuthors = 0;
   muon_IDeta = 0;
   muon_PixHits = 0;
   muon_PixDead = 0;
   muon_SCTHits = 0;
   muon_SCTDead = 0;
   muon_PixHoles = 0;
   muon_SCTHoles = 0;
   muon_TRTHits = 0;
   muon_TRTOut = 0;
   muon_combinedTrackOutBoundsPrecisionHits = 0;
   muon_nprecisionLayers = 0;
   muon_nprecisionHoleLayers = 0;
   muon_nprecisionLayerswoNSW = 0;
   muon_mePt = 0;
   muon_idPt = 0;
   muon_cbPt = 0;
   muon_meP = 0;
   muon_idP = 0;
   muon_meqOverP = 0;
   muon_idqOverP = 0;
   muon_cbqOverP = 0;
   muon_meqOverPsigma = 0;
   muon_idqOverPsigma = 0;
   muon_cbqOverPsigma = 0;
   muon_rho = 0;
   muon_qOverPsigma = 0;
   muon_qOverPsignif = 0;
   muon_reducedChi2 = 0;
   muon_idreducedChi2 = 0;
   muon_mereducedChi2 = 0;
   muon_innerSmallHits = 0;
   muon_innerLargeHits = 0;
   muon_middleSmallHits = 0;
   muon_middleLargeHits = 0;
   muon_outerSmallHits = 0;
   muon_outerLargeHits = 0;
   muon_rhoCut_lowPt = 0;
   muon_qOverPCut_lowPt = 0;
   muon_rhoCut_mediumPt = 0;
   muon_rhoCut_highPt = 0;
   muon_caloMuonIDTag = 0;
   muon_caloMuonScore = 0;
   muon_nGoodPrecLayers = 0;
   muon_extendedSmallHits = 0;
   muon_extendedLargeHits = 0;
   muon_extendedSmallHoles = 0;
   muon_isSmallGoodSectors = 0;
   muon_cscUnspoiledEtaHits = 0;
   muon_etaMS = 0;
   muon_phiMS = 0;
   muon_etaCB = 0;
   muon_isBIS78 = 0;
   muon_isBMG = 0;
   muon_isBEE = 0;
   muon_momentumBalanceSig = 0;
   muon_scatteringCurvatureSig = 0;
   muon_scatteringNeighbourSig = 0;
   muon_energyLoss = 0;
   muon_energyLossType = 0;
   muon_muonSegmentDeltaEta = 0;
   muon_middleHoles = 0;
   muon_muonSeg1ChamberIdx = 0;
   muon_muonSeg2ChamberIdx = 0;
   muon_muonSeg3ChamberIdx = 0;
   muon_muonSeg4ChamberIdx = 0;
   muon_ptvarcone20 = 0;
   muon_ptvarcone30 = 0;
   muon_ptvarcone40 = 0;
   muon_topoetcone20 = 0;
   muon_topoetcone30 = 0;
   muon_topoetcone40 = 0;
   muon_ptcone20 = 0;
   muon_ptcone30 = 0;
   muon_ptcone40 = 0;
   muon_neflowisol20 = 0;
   muon_CaloMuonScore = 0;
   muon_phiLayer1RPCHits = 0;
   muon_phiLayer2RPCHits = 0;
   muon_phiLayer3RPCHits = 0;
   muon_phiLayer4RPCHits = 0;
   muon_etaLayer1RPCHits = 0;
   muon_etaLayer2RPCHits = 0;
   muon_etaLayer3RPCHits = 0;
   muon_etaLayer4RPCHits = 0;
   muon_phiLayer1RPCHoles = 0;
   muon_phiLayer2RPCHoles = 0;
   muon_phiLayer3RPCHoles = 0;
   muon_phiLayer4RPCHoles = 0;
   muon_etaLayer1RPCHoles = 0;
   muon_etaLayer2RPCHoles = 0;
   muon_etaLayer3RPCHoles = 0;
   muon_etaLayer4RPCHoles = 0;
   muon_phiLayer1TGCHits = 0;
   muon_phiLayer2TGCHits = 0;
   muon_phiLayer3TGCHits = 0;
   muon_phiLayer4TGCHits = 0;
   muon_etaLayer1TGCHits = 0;
   muon_etaLayer2TGCHits = 0;
   muon_etaLayer3TGCHits = 0;
   muon_etaLayer4TGCHits = 0;
   muon_phiLayer1TGCHoles = 0;
   muon_phiLayer2TGCHoles = 0;
   muon_phiLayer3TGCHoles = 0;
   muon_phiLayer4TGCHoles = 0;
   muon_etaLayer1TGCHoles = 0;
   muon_etaLayer2TGCHoles = 0;
   muon_etaLayer3TGCHoles = 0;
   muon_etaLayer4TGCHoles = 0;
   muon_phiLayer1STGCHits = 0;
   muon_phiLayer2STGCHits = 0;
   muon_etaLayer1STGCHits = 0;
   muon_etaLayer2STGCHits = 0;
   muon_phiLayer1STGCHoles = 0;
   muon_phiLayer2STGCHoles = 0;
   muon_etaLayer1STGCHoles = 0;
   muon_etaLayer2STGCHoles = 0;
   muon_MMHits = 0;
   muon_MMHoles = 0;
   muon_cscEtaHits = 0;
   muon_idtrk_d0 = 0;
   muon_cbtrk_d0 = 0;
   muon_iso_Tight = 0;
   muon_iso_Loose = 0;
   muon_iso_PflowTight = 0;
   muon_iso_PflowLoose = 0;
   muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500 = 0;
   muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000 = 0;
   muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500 = 0;
   muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000 = 0;
   muon_IsoCloseByCorr_assocClustEta = 0;
   muon_IsoCloseByCorr_assocClustPhi = 0;
   muon_IsoCloseByCorr_assocClustEnergy = 0;
   muon_IsoCloseByCorr_assocClustDecor = 0;
   muon_IsoCloseByCorr_assocPflowEta = 0;
   muon_IsoCloseByCorr_assocPflowPhi = 0;
   muon_IsoCloseByCorr_assocPflowEnergy = 0;
   muon_IsoCloseByCorr_assocPflowDecor = 0;
   muon_DFCommonJetDr = 0;
   muon_truthType = 0;
   muon_truthOrigin = 0;
   muon_truthIFFType = 0;
   muon_truthmuon_index = 0;
   truthmuon_e = 0;
   truthmuon_pt = 0;
   truthmuon_eta = 0;
   truthmuon_phi = 0;
   truthmuon_charge = 0;
   truthmuon_pdgId = 0;
   truthmuon_type = 0;
   truthmuon_origin = 0;
   truthmuon_IFFType = 0;
   truthmuon_muon_index = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("LumiBlock", &LumiBlock, &b_LumiBlock);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("mcEventWeight", &mcEventWeight, &b_mcEventWeight);
   fChain->SetBranchAddress("actualInteractionsPerCrossing", &actualInteractionsPerCrossing, &b_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("averageInteractionsPerCrossing", &averageInteractionsPerCrossing, &b_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("muon_e", &muon_e, &b_muon_e);
   fChain->SetBranchAddress("muon_pt", &muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("muon_eta", &muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_phi", &muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_charge", &muon_charge, &b_muon_charge);
   fChain->SetBranchAddress("muon_Tight", &muon_Tight, &b_muon_Tight);
   fChain->SetBranchAddress("muon_Medium", &muon_Medium, &b_muon_Medium);
   fChain->SetBranchAddress("muon_Loose", &muon_Loose, &b_muon_Loose);
   fChain->SetBranchAddress("muon_VeryLoose", &muon_VeryLoose, &b_muon_VeryLoose);
   fChain->SetBranchAddress("muon_HighPt", &muon_HighPt, &b_muon_HighPt);
   fChain->SetBranchAddress("muon_LowPt", &muon_LowPt, &b_muon_LowPt);
   fChain->SetBranchAddress("muon_LowPtMVA", &muon_LowPtMVA, &b_muon_LowPtMVA);
   fChain->SetBranchAddress("muon_quality", &muon_quality, &b_muon_quality);
   fChain->SetBranchAddress("muon_passPresel", &muon_passPresel, &b_muon_passPresel);
   fChain->SetBranchAddress("muon_passIDhits", &muon_passIDhits, &b_muon_passIDhits);
   fChain->SetBranchAddress("muon_isBadMuon_highPt", &muon_isBadMuon_highPt, &b_muon_isBadMuon_highPt);
   fChain->SetBranchAddress("muon_isBadMuon_other", &muon_isBadMuon_other, &b_muon_isBadMuon_other);
   fChain->SetBranchAddress("muon_muonType", &muon_muonType, &b_muon_muonType);
   fChain->SetBranchAddress("muon_author", &muon_author, &b_muon_author);
   fChain->SetBranchAddress("muon_allAuthors", &muon_allAuthors, &b_muon_allAuthors);
   fChain->SetBranchAddress("muon_IDeta", &muon_IDeta, &b_muon_IDeta);
   fChain->SetBranchAddress("muon_PixHits", &muon_PixHits, &b_muon_PixHits);
   fChain->SetBranchAddress("muon_PixDead", &muon_PixDead, &b_muon_PixDead);
   fChain->SetBranchAddress("muon_SCTHits", &muon_SCTHits, &b_muon_SCTHits);
   fChain->SetBranchAddress("muon_SCTDead", &muon_SCTDead, &b_muon_SCTDead);
   fChain->SetBranchAddress("muon_PixHoles", &muon_PixHoles, &b_muon_PixHoles);
   fChain->SetBranchAddress("muon_SCTHoles", &muon_SCTHoles, &b_muon_SCTHoles);
   fChain->SetBranchAddress("muon_TRTHits", &muon_TRTHits, &b_muon_TRTHits);
   fChain->SetBranchAddress("muon_TRTOut", &muon_TRTOut, &b_muon_TRTOut);
   fChain->SetBranchAddress("muon_combinedTrackOutBoundsPrecisionHits", &muon_combinedTrackOutBoundsPrecisionHits, &b_muon_combinedTrackOutBoundsPrecisionHits);
   fChain->SetBranchAddress("muon_nprecisionLayers", &muon_nprecisionLayers, &b_muon_nprecisionLayers);
   fChain->SetBranchAddress("muon_nprecisionHoleLayers", &muon_nprecisionHoleLayers, &b_muon_nprecisionHoleLayers);
   fChain->SetBranchAddress("muon_nprecisionLayerswoNSW", &muon_nprecisionLayerswoNSW, &b_muon_nprecisionLayerswoNSW);
   fChain->SetBranchAddress("muon_mePt", &muon_mePt, &b_muon_mePt);
   fChain->SetBranchAddress("muon_idPt", &muon_idPt, &b_muon_idPt);
   fChain->SetBranchAddress("muon_cbPt", &muon_cbPt, &b_muon_cbPt);
   fChain->SetBranchAddress("muon_meP", &muon_meP, &b_muon_meP);
   fChain->SetBranchAddress("muon_idP", &muon_idP, &b_muon_idP);
   fChain->SetBranchAddress("muon_meqOverP", &muon_meqOverP, &b_muon_meqOverP);
   fChain->SetBranchAddress("muon_idqOverP", &muon_idqOverP, &b_muon_idqOverP);
   fChain->SetBranchAddress("muon_cbqOverP", &muon_cbqOverP, &b_muon_cbqOverP);
   fChain->SetBranchAddress("muon_meqOverPsigma", &muon_meqOverPsigma, &b_muon_meqOverPsigma);
   fChain->SetBranchAddress("muon_idqOverPsigma", &muon_idqOverPsigma, &b_muon_idqOverPsigma);
   fChain->SetBranchAddress("muon_cbqOverPsigma", &muon_cbqOverPsigma, &b_muon_cbqOverPsigma);
   fChain->SetBranchAddress("muon_rho", &muon_rho, &b_muon_rho);
   fChain->SetBranchAddress("muon_qOverPsigma", &muon_qOverPsigma, &b_muon_qOverPsigma);
   fChain->SetBranchAddress("muon_qOverPsignif", &muon_qOverPsignif, &b_muon_qOverPsignif);
   fChain->SetBranchAddress("muon_reducedChi2", &muon_reducedChi2, &b_muon_reducedChi2);
   fChain->SetBranchAddress("muon_idreducedChi2", &muon_idreducedChi2, &b_muon_idreducedChi2);
   fChain->SetBranchAddress("muon_mereducedChi2", &muon_mereducedChi2, &b_muon_mereducedChi2);
   fChain->SetBranchAddress("muon_innerSmallHits", &muon_innerSmallHits, &b_muon_innerSmallHits);
   fChain->SetBranchAddress("muon_innerLargeHits", &muon_innerLargeHits, &b_muon_innerLargeHits);
   fChain->SetBranchAddress("muon_middleSmallHits", &muon_middleSmallHits, &b_muon_middleSmallHits);
   fChain->SetBranchAddress("muon_middleLargeHits", &muon_middleLargeHits, &b_muon_middleLargeHits);
   fChain->SetBranchAddress("muon_outerSmallHits", &muon_outerSmallHits, &b_muon_outerSmallHits);
   fChain->SetBranchAddress("muon_outerLargeHits", &muon_outerLargeHits, &b_muon_outerLargeHits);
   fChain->SetBranchAddress("muon_rhoCut_lowPt", &muon_rhoCut_lowPt, &b_muon_rhoCut_lowPt);
   fChain->SetBranchAddress("muon_qOverPCut_lowPt", &muon_qOverPCut_lowPt, &b_muon_qOverPCut_lowPt);
   fChain->SetBranchAddress("muon_rhoCut_mediumPt", &muon_rhoCut_mediumPt, &b_muon_rhoCut_mediumPt);
   fChain->SetBranchAddress("muon_rhoCut_highPt", &muon_rhoCut_highPt, &b_muon_rhoCut_highPt);
   fChain->SetBranchAddress("muon_caloMuonIDTag", &muon_caloMuonIDTag, &b_muon_caloMuonIDTag);
   fChain->SetBranchAddress("muon_caloMuonScore", &muon_caloMuonScore, &b_muon_caloMuonScore);
   fChain->SetBranchAddress("muon_nGoodPrecLayers", &muon_nGoodPrecLayers, &b_muon_nGoodPrecLayers);
   fChain->SetBranchAddress("muon_extendedSmallHits", &muon_extendedSmallHits, &b_muon_extendedSmallHits);
   fChain->SetBranchAddress("muon_extendedLargeHits", &muon_extendedLargeHits, &b_muon_extendedLargeHits);
   fChain->SetBranchAddress("muon_extendedSmallHoles", &muon_extendedSmallHoles, &b_muon_extendedSmallHoles);
   fChain->SetBranchAddress("muon_isSmallGoodSectors", &muon_isSmallGoodSectors, &b_muon_isSmallGoodSectors);
   fChain->SetBranchAddress("muon_cscUnspoiledEtaHits", &muon_cscUnspoiledEtaHits, &b_muon_cscUnspoiledEtaHits);
   fChain->SetBranchAddress("muon_etaMS", &muon_etaMS, &b_muon_etaMS);
   fChain->SetBranchAddress("muon_phiMS", &muon_phiMS, &b_muon_phiMS);
   fChain->SetBranchAddress("muon_etaCB", &muon_etaCB, &b_muon_etaCB);
   fChain->SetBranchAddress("muon_isBIS78", &muon_isBIS78, &b_muon_isBIS78);
   fChain->SetBranchAddress("muon_isBMG", &muon_isBMG, &b_muon_isBMG);
   fChain->SetBranchAddress("muon_isBEE", &muon_isBEE, &b_muon_isBEE);
   fChain->SetBranchAddress("muon_momentumBalanceSig", &muon_momentumBalanceSig, &b_muon_momentumBalanceSig);
   fChain->SetBranchAddress("muon_scatteringCurvatureSig", &muon_scatteringCurvatureSig, &b_muon_scatteringCurvatureSig);
   fChain->SetBranchAddress("muon_scatteringNeighbourSig", &muon_scatteringNeighbourSig, &b_muon_scatteringNeighbourSig);
   fChain->SetBranchAddress("muon_energyLoss", &muon_energyLoss, &b_muon_energyLoss);
   fChain->SetBranchAddress("muon_energyLossType", &muon_energyLossType, &b_muon_energyLossType);
   fChain->SetBranchAddress("muon_muonSegmentDeltaEta", &muon_muonSegmentDeltaEta, &b_muon_muonSegmentDeltaEta);
   fChain->SetBranchAddress("muon_middleHoles", &muon_middleHoles, &b_muon_middleHoles);
   fChain->SetBranchAddress("muon_muonSeg1ChamberIdx", &muon_muonSeg1ChamberIdx, &b_muon_muonSeg1ChamberIdx);
   fChain->SetBranchAddress("muon_muonSeg2ChamberIdx", &muon_muonSeg2ChamberIdx, &b_muon_muonSeg2ChamberIdx);
   fChain->SetBranchAddress("muon_muonSeg3ChamberIdx", &muon_muonSeg3ChamberIdx, &b_muon_muonSeg3ChamberIdx);
   fChain->SetBranchAddress("muon_muonSeg4ChamberIdx", &muon_muonSeg4ChamberIdx, &b_muon_muonSeg4ChamberIdx);
   fChain->SetBranchAddress("muon_ptvarcone20", &muon_ptvarcone20, &b_muon_ptvarcone20);
   fChain->SetBranchAddress("muon_ptvarcone30", &muon_ptvarcone30, &b_muon_ptvarcone30);
   fChain->SetBranchAddress("muon_ptvarcone40", &muon_ptvarcone40, &b_muon_ptvarcone40);
   fChain->SetBranchAddress("muon_topoetcone20", &muon_topoetcone20, &b_muon_topoetcone20);
   fChain->SetBranchAddress("muon_topoetcone30", &muon_topoetcone30, &b_muon_topoetcone30);
   fChain->SetBranchAddress("muon_topoetcone40", &muon_topoetcone40, &b_muon_topoetcone40);
   fChain->SetBranchAddress("muon_ptcone20", &muon_ptcone20, &b_muon_ptcone20);
   fChain->SetBranchAddress("muon_ptcone30", &muon_ptcone30, &b_muon_ptcone30);
   fChain->SetBranchAddress("muon_ptcone40", &muon_ptcone40, &b_muon_ptcone40);
   fChain->SetBranchAddress("muon_neflowisol20", &muon_neflowisol20, &b_muon_neflowisol20);
   fChain->SetBranchAddress("muon_CaloMuonScore", &muon_CaloMuonScore, &b_muon_CaloMuonScore);
   fChain->SetBranchAddress("muon_phiLayer1RPCHits", &muon_phiLayer1RPCHits, &b_muon_phiLayer1RPCHits);
   fChain->SetBranchAddress("muon_phiLayer2RPCHits", &muon_phiLayer2RPCHits, &b_muon_phiLayer2RPCHits);
   fChain->SetBranchAddress("muon_phiLayer3RPCHits", &muon_phiLayer3RPCHits, &b_muon_phiLayer3RPCHits);
   fChain->SetBranchAddress("muon_phiLayer4RPCHits", &muon_phiLayer4RPCHits, &b_muon_phiLayer4RPCHits);
   fChain->SetBranchAddress("muon_etaLayer1RPCHits", &muon_etaLayer1RPCHits, &b_muon_etaLayer1RPCHits);
   fChain->SetBranchAddress("muon_etaLayer2RPCHits", &muon_etaLayer2RPCHits, &b_muon_etaLayer2RPCHits);
   fChain->SetBranchAddress("muon_etaLayer3RPCHits", &muon_etaLayer3RPCHits, &b_muon_etaLayer3RPCHits);
   fChain->SetBranchAddress("muon_etaLayer4RPCHits", &muon_etaLayer4RPCHits, &b_muon_etaLayer4RPCHits);
   fChain->SetBranchAddress("muon_phiLayer1RPCHoles", &muon_phiLayer1RPCHoles, &b_muon_phiLayer1RPCHoles);
   fChain->SetBranchAddress("muon_phiLayer2RPCHoles", &muon_phiLayer2RPCHoles, &b_muon_phiLayer2RPCHoles);
   fChain->SetBranchAddress("muon_phiLayer3RPCHoles", &muon_phiLayer3RPCHoles, &b_muon_phiLayer3RPCHoles);
   fChain->SetBranchAddress("muon_phiLayer4RPCHoles", &muon_phiLayer4RPCHoles, &b_muon_phiLayer4RPCHoles);
   fChain->SetBranchAddress("muon_etaLayer1RPCHoles", &muon_etaLayer1RPCHoles, &b_muon_etaLayer1RPCHoles);
   fChain->SetBranchAddress("muon_etaLayer2RPCHoles", &muon_etaLayer2RPCHoles, &b_muon_etaLayer2RPCHoles);
   fChain->SetBranchAddress("muon_etaLayer3RPCHoles", &muon_etaLayer3RPCHoles, &b_muon_etaLayer3RPCHoles);
   fChain->SetBranchAddress("muon_etaLayer4RPCHoles", &muon_etaLayer4RPCHoles, &b_muon_etaLayer4RPCHoles);
   fChain->SetBranchAddress("muon_phiLayer1TGCHits", &muon_phiLayer1TGCHits, &b_muon_phiLayer1TGCHits);
   fChain->SetBranchAddress("muon_phiLayer2TGCHits", &muon_phiLayer2TGCHits, &b_muon_phiLayer2TGCHits);
   fChain->SetBranchAddress("muon_phiLayer3TGCHits", &muon_phiLayer3TGCHits, &b_muon_phiLayer3TGCHits);
   fChain->SetBranchAddress("muon_phiLayer4TGCHits", &muon_phiLayer4TGCHits, &b_muon_phiLayer4TGCHits);
   fChain->SetBranchAddress("muon_etaLayer1TGCHits", &muon_etaLayer1TGCHits, &b_muon_etaLayer1TGCHits);
   fChain->SetBranchAddress("muon_etaLayer2TGCHits", &muon_etaLayer2TGCHits, &b_muon_etaLayer2TGCHits);
   fChain->SetBranchAddress("muon_etaLayer3TGCHits", &muon_etaLayer3TGCHits, &b_muon_etaLayer3TGCHits);
   fChain->SetBranchAddress("muon_etaLayer4TGCHits", &muon_etaLayer4TGCHits, &b_muon_etaLayer4TGCHits);
   fChain->SetBranchAddress("muon_phiLayer1TGCHoles", &muon_phiLayer1TGCHoles, &b_muon_phiLayer1TGCHoles);
   fChain->SetBranchAddress("muon_phiLayer2TGCHoles", &muon_phiLayer2TGCHoles, &b_muon_phiLayer2TGCHoles);
   fChain->SetBranchAddress("muon_phiLayer3TGCHoles", &muon_phiLayer3TGCHoles, &b_muon_phiLayer3TGCHoles);
   fChain->SetBranchAddress("muon_phiLayer4TGCHoles", &muon_phiLayer4TGCHoles, &b_muon_phiLayer4TGCHoles);
   fChain->SetBranchAddress("muon_etaLayer1TGCHoles", &muon_etaLayer1TGCHoles, &b_muon_etaLayer1TGCHoles);
   fChain->SetBranchAddress("muon_etaLayer2TGCHoles", &muon_etaLayer2TGCHoles, &b_muon_etaLayer2TGCHoles);
   fChain->SetBranchAddress("muon_etaLayer3TGCHoles", &muon_etaLayer3TGCHoles, &b_muon_etaLayer3TGCHoles);
   fChain->SetBranchAddress("muon_etaLayer4TGCHoles", &muon_etaLayer4TGCHoles, &b_muon_etaLayer4TGCHoles);
   fChain->SetBranchAddress("muon_phiLayer1STGCHits", &muon_phiLayer1STGCHits, &b_muon_phiLayer1STGCHits);
   fChain->SetBranchAddress("muon_phiLayer2STGCHits", &muon_phiLayer2STGCHits, &b_muon_phiLayer2STGCHits);
   fChain->SetBranchAddress("muon_etaLayer1STGCHits", &muon_etaLayer1STGCHits, &b_muon_etaLayer1STGCHits);
   fChain->SetBranchAddress("muon_etaLayer2STGCHits", &muon_etaLayer2STGCHits, &b_muon_etaLayer2STGCHits);
   fChain->SetBranchAddress("muon_phiLayer1STGCHoles", &muon_phiLayer1STGCHoles, &b_muon_phiLayer1STGCHoles);
   fChain->SetBranchAddress("muon_phiLayer2STGCHoles", &muon_phiLayer2STGCHoles, &b_muon_phiLayer2STGCHoles);
   fChain->SetBranchAddress("muon_etaLayer1STGCHoles", &muon_etaLayer1STGCHoles, &b_muon_etaLayer1STGCHoles);
   fChain->SetBranchAddress("muon_etaLayer2STGCHoles", &muon_etaLayer2STGCHoles, &b_muon_etaLayer2STGCHoles);
   fChain->SetBranchAddress("muon_MMHits", &muon_MMHits, &b_muon_MMHits);
   fChain->SetBranchAddress("muon_MMHoles", &muon_MMHoles, &b_muon_MMHoles);
   fChain->SetBranchAddress("muon_cscEtaHits", &muon_cscEtaHits, &b_muon_cscEtaHits);
   fChain->SetBranchAddress("muon_idtrk_d0", &muon_idtrk_d0, &b_muon_idtrk_d0);
   fChain->SetBranchAddress("muon_cbtrk_d0", &muon_cbtrk_d0, &b_muon_cbtrk_d0);
   fChain->SetBranchAddress("muon_iso_Tight", &muon_iso_Tight, &b_muon_iso_Tight);
   fChain->SetBranchAddress("muon_iso_Loose", &muon_iso_Loose, &b_muon_iso_Loose);
   fChain->SetBranchAddress("muon_iso_PflowTight", &muon_iso_PflowTight, &b_muon_iso_PflowTight);
   fChain->SetBranchAddress("muon_iso_PflowLoose", &muon_iso_PflowLoose, &b_muon_iso_PflowLoose);
   fChain->SetBranchAddress("muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500", &muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500, &b_muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt500);
   fChain->SetBranchAddress("muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000", &muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000, &b_muon_ptcone20_Nonprompt_All_MaxWeightTTVA_pt1000);
   fChain->SetBranchAddress("muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500", &muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500, &b_muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt500);
   fChain->SetBranchAddress("muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000", &muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000, &b_muon_ptvarcone30_Nonprompt_All_MaxWeightTTVA_pt1000);
   fChain->SetBranchAddress("muon_IsoCloseByCorr_assocClustEta", &muon_IsoCloseByCorr_assocClustEta, &b_muon_IsoCloseByCorr_assocClustEta);
   fChain->SetBranchAddress("muon_IsoCloseByCorr_assocClustPhi", &muon_IsoCloseByCorr_assocClustPhi, &b_muon_IsoCloseByCorr_assocClustPhi);
   fChain->SetBranchAddress("muon_IsoCloseByCorr_assocClustEnergy", &muon_IsoCloseByCorr_assocClustEnergy, &b_muon_IsoCloseByCorr_assocClustEnergy);
   fChain->SetBranchAddress("muon_IsoCloseByCorr_assocClustDecor", &muon_IsoCloseByCorr_assocClustDecor, &b_muon_IsoCloseByCorr_assocClustDecor);
   fChain->SetBranchAddress("muon_IsoCloseByCorr_assocPflowEta", &muon_IsoCloseByCorr_assocPflowEta, &b_muon_IsoCloseByCorr_assocPflowEta);
   fChain->SetBranchAddress("muon_IsoCloseByCorr_assocPflowPhi", &muon_IsoCloseByCorr_assocPflowPhi, &b_muon_IsoCloseByCorr_assocPflowPhi);
   fChain->SetBranchAddress("muon_IsoCloseByCorr_assocPflowEnergy", &muon_IsoCloseByCorr_assocPflowEnergy, &b_muon_IsoCloseByCorr_assocPflowEnergy);
   fChain->SetBranchAddress("muon_IsoCloseByCorr_assocPflowDecor", &muon_IsoCloseByCorr_assocPflowDecor, &b_muon_IsoCloseByCorr_assocPflowDecor);
   fChain->SetBranchAddress("muon_DFCommonJetDr", &muon_DFCommonJetDr, &b_muon_DFCommonJetDr);
   fChain->SetBranchAddress("muon_truthType", &muon_truthType, &b_muon_truthType);
   fChain->SetBranchAddress("muon_truthOrigin", &muon_truthOrigin, &b_muon_truthOrigin);
   fChain->SetBranchAddress("muon_truthIFFType", &muon_truthIFFType, &b_muon_truthIFFType);
   fChain->SetBranchAddress("muon_truthmuon_index", &muon_truthmuon_index, &b_muon_truthmuon_index);
   fChain->SetBranchAddress("truthmuon_e", &truthmuon_e, &b_truthmuon_e);
   fChain->SetBranchAddress("truthmuon_pt", &truthmuon_pt, &b_truthmuon_pt);
   fChain->SetBranchAddress("truthmuon_eta", &truthmuon_eta, &b_truthmuon_eta);
   fChain->SetBranchAddress("truthmuon_phi", &truthmuon_phi, &b_truthmuon_phi);
   fChain->SetBranchAddress("truthmuon_charge", &truthmuon_charge, &b_truthmuon_charge);
   fChain->SetBranchAddress("truthmuon_pdgId", &truthmuon_pdgId, &b_truthmuon_pdgId);
   fChain->SetBranchAddress("truthmuon_type", &truthmuon_type, &b_truthmuon_type);
   fChain->SetBranchAddress("truthmuon_origin", &truthmuon_origin, &b_truthmuon_origin);
   fChain->SetBranchAddress("truthmuon_IFFType", &truthmuon_IFFType, &b_truthmuon_IFFType);
   fChain->SetBranchAddress("truthmuon_muon_index", &truthmuon_muon_index, &b_truthmuon_muon_index);
   Notify();
}

Bool_t MyClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void MyClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t MyClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef MyClass_cxx
