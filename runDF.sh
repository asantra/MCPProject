#! /bin/bash

root -l << EOF
.L makeMuonHist.cpp++
makeMuonHist("user.asantra.data22_13p6TeV.00428777.physics_Main.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data22_00428777.root")
//makeMuonHist("user.asantra.data22_13p6TeV.00438181.physics_Main.deriv.DAOD_PHYS.r14190_p5449_p5632.MCP_TESTNTUP_ANALYSIS.root", "muonAnalysis_data22_00438181.root")
EOF
