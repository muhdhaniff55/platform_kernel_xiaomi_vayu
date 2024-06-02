#!bin/bash

# Colors
NC='\033[0m'
RED='\033[0;31m'
LRD='\033[1;31m'
LGR='\033[1;32m'

END=$(date +"%s")

rm -rf out && make clean && make mrproper
echo -e ${LGR} "#### build completed successfully (($END)) ####"
