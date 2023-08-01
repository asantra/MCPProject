#! /bin/bash

root -l << EOF
.L MyClass.C++
TChain chain("analysis")
chain.Add("/Volumes/OS/MCPFiles/user.asantra.34183806._000001.ANALYSIS.root")
MyClass t(&chain)
t.Loop()
EOF
