#! /bin/bash

sftp asantra@lxplus.cern.ch << EOF
put *.C /afs/cern.ch/work/a/asantra/private/MuonWorkingPoint/IdentificationTutorial/run
put *.h /afs/cern.ch/work/a/asantra/private/MuonWorkingPoint/IdentificationTutorial/run
put run*.sh /afs/cern.ch/work/a/asantra/private/MuonWorkingPoint/IdentificationTutorial/run
put *.py /afs/cern.ch/work/a/asantra/private/MuonWorkingPoint/IdentificationTutorial/run
EOF
