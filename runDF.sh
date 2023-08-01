#! /bin/bash

root -l << EOF
.L makeMuonHist.cpp++
makeMuonHist("user.asantra.34183806._000001.ANALYSIS.root", "muonAnalysis_data22_DF.root")
EOF
