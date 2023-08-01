#ifndef INPUTFUNCTIONS_H
#define INPUTFUNCTIONS_H
#endif

#include <iostream>
#include "TString.h"
#include "TCollection.h"
#include "TKey.h"
#include "TClass.h"
#include "TMath.h"
#include <string>
#include <sys/stat.h>
#include "TChain.h"
#include "TTree.h"
#include <algorithm>
#include <time.h>
#include <chrono>  // for high_resolution_clock
#include <sstream>
#include <cmath>



TH1D *getOverflow(TH1D *h_Sample){
    int bin = h_Sample->GetNbinsX();
    float lastBinValue = h_Sample->GetBinContent(bin);
    float lastBinError = h_Sample->GetBinError(bin);
    
    float lastBinOverflowValue = h_Sample->GetBinContent(bin+1);
    float lastBinOverflowError = h_Sample->GetBinError(bin+1);
    
    float finalValue = lastBinValue + lastBinOverflowValue;
    float finalError = sqrt(lastBinError*lastBinError + lastBinOverflowError*lastBinOverflowError);
    
    h_Sample->SetBinContent(bin, finalValue);
    h_Sample->SetBinContent(bin+1, 0);
    h_Sample->SetBinError(bin, finalError);
    h_Sample->SetBinError(bin+1, 0);
    
    return h_Sample;
}



TH1D *getUnderflow(TH1D *h_Sample){
    float firstBinValue = h_Sample->GetBinContent(1);
    float firstBinError = h_Sample->GetBinError(1);
    
    float firstBinUnderflowValue = h_Sample->GetBinContent(0);
    float firstBinUnderflowError = h_Sample->GetBinError(0);
    
    float finalValue = firstBinValue + firstBinUnderflowValue;
    float finalError = sqrt(firstBinError*firstBinError + firstBinUnderflowError*firstBinUnderflowError);
    
    h_Sample->SetBinContent(1, finalValue);
    h_Sample->SetBinContent(0, 0.0);
    h_Sample->SetBinError(1, finalError);
    h_Sample->SetBinError(0, 0.0);
    
    return h_Sample;
}
