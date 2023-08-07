#! /bin/bash

root -l << EOF
/// compile the code
.L makeMuonHist.cpp++
//makeMuonHist("user.asantra.data22_13p6TeV.00428777.physics_Main.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data22_00428777.root")
/// data22 - third highest number of events
//makeMuonHist("user.asantra.data22_13p6TeV.00438181.physics_Main.deriv.DAOD_PHYS.r14190_p5449_p5632.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data22_00438181.root")
/// data22 - highest number of events
//makeMuonHist("user.asantra.data22_13p6TeV.00440543.physics_Main.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data22_00440543.root")
/// data23 - highest number of events
makeMuonHist("user.asantra.data23_13p6TeV.00456409.physics_Main.deriv.DAOD_PHYS.f1369_m2191_p5632.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data23_00456409.root")
/// local run
//makeMuonHist("Users/arkasantra/arka/MCPWork/MCPFiles", "muonAnalysis_data_local.root")
EOF
