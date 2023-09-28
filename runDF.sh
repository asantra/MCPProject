#! /bin/bash

root -l << EOF
/// compile the code
.L makeMuonHist.cpp++
/////////////////////////////////////////////////
// DAOD files, without NSW hits in the endcap ///
/////////////////////////////////////////////////
//makeMuonHist("user.asantra.data22_13p6TeV.00428777.physics_Main.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data22_00428777.root")
/// data22 - third highest number of events
//makeMuonHist("user.asantra.data22_13p6TeV.00438181.physics_Main.deriv.DAOD_PHYS.r14190_p5449_p5632.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data22_00438181.root")
/// data22 - highest number of events
//makeMuonHist("user.asantra.data22_13p6TeV.00440543.physics_Main.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data22_00440543.root")
/// data23 - highest number of events
//makeMuonHist("user.asantra.data23_13p6TeV.00456409.physics_Main.deriv.DAOD_PHYS.f1369_m2191_p5632.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data23_00456409.root")
/// local run
//makeMuonHist("Users/arkasantra/arka/MCPWork/MCPFiles", "muonAnalysis_data_local.root")
/////////////////////////////////////////////////
// AOD files, with NSW hits in the endcap ///
/////////////////////////////////////////////////
/// data23 - highest number of events
makeMuonHist("user.asantra.data23_13p6TeV.00456409.physics_Main.merge.AOD.f1369_m2191.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysisAOD_MuTrigandMCut_data23_00456409.root")
/// data23 - second highest number of events
makeMuonHist("user.asantra.data23_13p6TeV.00451037.physics_Main.merge.AOD.f1345_m2167.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysisAOD_MuTrigandMCut_data23_00451037.root")
/// data23 - third highest number of events
makeMuonHist("user.asantra.data23_13p6TeV.00452843.physics_Main.merge.AOD.f1354_m2173.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysisAOD_MuTrigandMCut_data23_00452843.root")
/// data23 - fourth highest number of events
makeMuonHist("user.asantra.data23_13p6TeV.00456110.physics_Main.merge.AOD.f1367_m2185.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysisAOD_MuTrigandMCut_data23_00456110.root")
/////////////////////////////////////////////////
// AOD files, without NSW hits in the endcap ///
/////////////////////////////////////////////////
/// data23 - highest number of events
//makeMuonHist("user.asantra.data23_13p6TeV.00456409.physics_Main.merge.AOD.f1369_m2191.MCP_TESTNTUP_NoNSW_ANALYSIS.root", "muonAnalysisAODNoNSW_data23_00456409.root")
/// data23 - second highest number of events
//makeMuonHist("user.asantra.data23_13p6TeV.00451037.physics_Main.merge.AOD.f1345_m2167.MCP_TESTNTUP_NoNSW_ANALYSIS.root", "muonAnalysisAODNoNSW_data23_00451037.root")
/// data23 - third highest number of events
//makeMuonHist("user.asantra.data23_13p6TeV.00452843.physics_Main.merge.AOD.f1354_m2173.MCP_TESTNTUP_NoNSW_ANALYSIS.root", "muonAnalysisAODNoNSW_data23_00452843.root")
/// data23 - fourth highest number of events
// makeMuonHist("user.asantra.data23_13p6TeV.00456110.physics_Main.merge.AOD.f1367_m2185.MCP_TESTNTUP_NoNSW_ANALYSIS.root", "muonAnalysisAODNoNSW_data23_00456110.root")
EOF