#### code to draw plots comparing muon distributions from high pt and medium.
#### The plots use LUXE dump geometry

import os, sys, time
import argparse
from ROOT import *
from copy import copy, deepcopy
#sys.path.insert(0, '/Users/arkasantra/arka/include')
from Functions import *
from collections import OrderedDict

def DrawHistsRatio(FirstTH1, LegendName, PlotColor, xrange1down, xrange1up, yrange1down, yrange1up, xaxisTitle, CanvasName, h2, yline1low, yline1up, drawline=False, logy=False, LatexName='', LatexName2='', TeVTag=False, doSumw2=False, doAtlas=False, doLumi=False, noRatio=False, do80=False, do59=False,drawOption=""):
   Tex = MakeLatex(0.85,0.65,LatexName)
   Tex2 = MakeLatex(0.85,0.60,LatexName2)
   c = TCanvas("c","c",900, 900)
   c.SetGrid()
   pad1 = TPad('pad1','pad1',0,0.25,1,1)
   pad1.SetBottomMargin(0.0)
   pad1.SetFillStyle(0)
   pad1.SetGrid()
   pad1.Draw()
   pad1.cd()
   gStyle.SetOptStat(0)
   if(logy):
     pad1.SetLogy()
     
   if "energy" in FirstTH1[0].GetName() or "time" in FirstTH1[0].GetName():
    pad1.SetLogx()

   line = MakeLine(xrange1down,yline1low,xrange1up,yline1up)
   legend1 = LegendMaker()
   tex1 = TLatex(); tex2 = TLatex(); tex3 = TLatex()
   L = [tex1, tex2, tex3]
   TexMaker(L, doAtlas, doLumi, noRatio, do80, do59)
   FirstTH1[0].GetYaxis().SetRangeUser(yrange1down,yrange1up)
   FirstTH1[0].GetXaxis().SetRangeUser(xrange1down,xrange1up)
   for i in range(0, len(FirstTH1)):
     FirstTH1[i].SetTitle("")
     FirstTH1[i].GetYaxis().SetTitle(FirstTH1[i].GetYaxis().GetTitle())
     
     FirstTH1[i].GetYaxis().SetTitleOffset(0.95)
     FirstTH1[i].GetYaxis().SetTitleSize(0.05)
     FirstTH1[i].GetYaxis().SetLabelSize(0.045)
     FirstTH1[i].GetXaxis().SetTitle("")
     FirstTH1[i].GetXaxis().SetLabelSize(0.15)
     w = FirstTH1[i].Integral()
     #FirstTH1[i].Scale(1./w)
     FirstTH1[i] = SetHistColorEtc(FirstTH1[i], PlotColor[i])
     legend1.AddEntry(FirstTH1[i],LegendName[i]+" ("+str(w)+")", "l")
   
   
   FirstTH1[0].GetXaxis().SetLabelSize(0.0);
   FirstTH1[0].GetYaxis().SetTitle("Events/bin");
   FirstTH1[0].SetLineWidth(2)
   FirstTH1[0].Draw("hist")
    
   #WaterMark.Draw("sames")
   gPad.SetTickx()
   gPad.SetTicky()
   gPad.Modified(); 
   gPad.Update();
   
   #### special file for Allpix-squared plot, otherwise remove -1 in the range
   for i in range(1, len(FirstTH1)):
     FirstTH1[i].SetLineWidth(1)
     FirstTH1[i].Draw("hist sames")
     gPad.Modified(); 
     gPad.Update();
     
   FirstTH1[0].SetLineWidth(1)
   FirstTH1[0].Draw("hist sames")
    
   gPad.RedrawAxis()
   L[1].Draw("sames")
   L[2].Draw("sames")
   if(TeVTag):
       TexTeV = TLatex(0.892,0.914,"#sqrt{s}=13 TeV")
       TexTeV.SetTextAlign(31)
       TexTeV.SetTextFont(42)
       TexTeV.SetTextSize(0.037)
       TexTeV.SetLineWidth(2) 
       TexTeV.Draw()
   else:
       L[0].Draw()
   legend1.Draw("sames")
   Tex.Draw("sames")
   Tex2.Draw("sames")
   
   c.cd()
   pad2 = TPad("pad2", "pad2",0.0,0.0,1.0,0.245)
   pad2.SetTopMargin(0.0)
   pad2.SetBottomMargin(0.3)
   pad2.SetFillStyle(0)
   pad2.Draw()
   pad2.cd()
   gStyle.SetOptStat(0)
   gPad.SetTickx()
   gPad.SetTicky()
   
   if(doSumw2):
       for i in range(0, len(FirstTH1)):
          FirstTH1[i].Sumw2() 
   
   h2.Divide(FirstTH1[0],FirstTH1[1])
   h2.GetXaxis().SetRangeUser(xrange1down,xrange1up)
   h2.GetXaxis().SetTitle(xaxisTitle)
   h2.GetYaxis().SetTitle(h2.GetYaxis().GetTitle())
   h2.GetYaxis().CenterTitle()
   h2.SetTitle('')
   h2 = OneRatioAxisSize(h2)
   h2.GetYaxis().SetRangeUser(0.0, 4.0)
   h2.GetYaxis().SetTitleOffset(0.45)
   h2.Draw("ep")
   if(drawline):
     line.SetLineStyle(2)
     line.Draw()
   SaveFile(c, CanvasName)
   return deepcopy(c)


def main():
    gROOT.SetBatch()
    parser = argparse.ArgumentParser(description='Code to plot muon distributions')
    parser.add_argument('-i', default="muonAnalysis_data22_DF.root", type=str)
    args = parser.parse_args()

    inName = args.i
    outDirExtension = inName.split('.root')[0]
    outDir = "muCompDist_"+outDirExtension
    if not os.path.exists(outDir):
        os.makedirs(outDir)

    ### get the root file
    inDir = "/Users/arkasantra/arka/MCPWork/MCPFiles/HistFiles"
    inFile = TFile(inDir+"/"+inName, "READ")

    ### add the histogram names
    histogramNames = ["mll", "muon_nprecisionLayers_0", "muon_nprecisionLayers_1", "muon_qOverPsignif_0", "muon_qOverPsignif_1", "muon_pt_0", "muon_pt_1", "muon_pt_0", "muon_phi_0", "muon_phi_1", "muon_eta_0", "muon_eta_1", "muon_eta_vs_phi_0", "muon_eta_vs_phi_1"]



    #### plotting the signal and background
    TeVTag=False; doSumw2=False; doAtlas=False; doLumi=False; noRatio=False; do80=False; do59=False; drawOption=""
    drawline    = True
    leftLegend  = True

    LegendName  = ["Medium", "High-p_{T}"]
    PlotColor   = [2, 4]
    latexName   = "muon"
    latexName2  = ''

    for sector in ["barrel" , "endcap"]:
      print('---> plotting ', sector)
      #### plot the barrel distributions
      for names in histogramNames:
        if sector == "barrel":
           suf = ''
        else:
           suf = '_EC'

        ### get histograms
        firstTH1  = inFile.Get(names+suf+"_medium")
        secondTH1 = inFile.Get(names+suf+"_highpt")
        strType = str(type(firstTH1))

        ### plot 2D COLZ plots
        if 'TH2' in strType:
              logy        = False
              logz        = False
              logx        = False
              drawPattern = "COLZ"

              FirstTH1    = [firstTH1]
              xAxisLow    = FirstTH1[0].GetXaxis().GetBinCenter(1)
              xAxisHigh   = FirstTH1[0].GetXaxis().GetBinCenter(FirstTH1[0].GetNbinsX())
              yAxisLow    = FirstTH1[0].GetYaxis().GetBinCenter(1)
              yAxisHigh   = FirstTH1[0].GetYaxis().GetBinCenter(FirstTH1[0].GetNbinsY())
              
              xAxisName   = FirstTH1[0].GetXaxis().GetTitle()
              yAxisName   = FirstTH1[0].GetYaxis().GetTitle()
              latexName3  = sector
              latexName4  = ''
              zAxisName   = 'Entries'
              zrange1down = 0
              zrange1up   = 120

              ## medium
              latexName2  = "medium"
              DrawHists(FirstTH1, LegendName, PlotColor,xAxisName, yAxisName, xAxisLow, xAxisHigh, yAxisHigh, yAxisLow, outDir+"/"+FirstTH1[0].GetName(), 1.0, 1.0, drawline, logy, latexName, latexName2, latexName3, leftLegend, doAtlas, doLumi, noRatio, do80, do59, drawPattern, logz, logx, latexName4, zAxisName,zrange1down,zrange1up)
              ## high pt
              latexName2  = "high-p_{T}"
              SecondTH1    = [secondTH1]
              DrawHists(SecondTH1, LegendName, PlotColor,xAxisName, yAxisName, xAxisLow, xAxisHigh, yAxisHigh, yAxisLow, outDir+"/"+SecondTH1[0].GetName(), 1.0, 1.0, drawline, logy, latexName, latexName2, latexName3, leftLegend, doAtlas, doLumi, noRatio, do80, do59, drawPattern, logz, logx, latexName4, zAxisName,zrange1down,zrange1up)
          
        else:
              logy        = True
              latexName2  = sector
              FirstTH1    = [firstTH1, secondTH1]
              xAxisLow    = FirstTH1[0].GetXaxis().GetBinCenter(1)
              xAxisHigh   = FirstTH1[0].GetXaxis().GetBinCenter(FirstTH1[0].GetNbinsX())
              
              yAxisHigh   = FirstTH1[0].GetMaximum()*4e1
              yAxisLow    = 5
              xAxisTitle  = FirstTH1[0].GetXaxis().GetTitle()

              h2 = FirstTH1[0].Clone("h2")
              h2.Reset()
              h2.GetYaxis().SetTitle("#frac{medium}{highpt}")

              DrawHistsRatio(FirstTH1, LegendName, PlotColor, xAxisLow, xAxisHigh, yAxisLow, yAxisHigh, xAxisTitle, outDir+"/"+FirstTH1[0].GetName(), h2, 1.0, 1.0, drawline, logy, latexName, latexName2, TeVTag, doSumw2, doAtlas, doLumi, noRatio, do80, do59)
      


if __name__=="__main__":
   start = time.time()
   main()
   print("--- processing time: ", time.time() - start)
