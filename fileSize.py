
### code to determine the size of datasets, and then put the output in descending size order
### run: python fileSize.py <listofdatasets>
### 
import os, sys

import argparse
parser = argparse.ArgumentParser(description='Batch Selections')
parser.add_argument('-inF', metavar='', default ='data22_DAOD_PHYS.txt', help='input file name')
parser.add_argument('-check', metavar='', default='data22', help='data stream')
argus = parser.parse_args()


inFileName = argus.inF
checking = argus.check

outFileName = "dataFiles_Size_"+checking+".txt"

counter = 0
fileDictGB = {}
fileDictTB = {}
with open(inFileName) as inFile:
    for lines in inFile.readlines():
        if checking not in lines: continue
        counter += 1
        eachWord = lines.split()
        fileName = eachWord[1].split(":")[1]
        print("--> I am working on: ", fileName, " number: ", counter)
        os.system('rucio list-files '+fileName+' > outRucio.txt')
        with open('outRucio.txt') as inRucio:
            for outLine in inRucio.readlines():
                if 'Total size' not in outLine: continue
                size = outLine.split()[3]
                sizeUnit = outLine.split()[4]
        if 'GB' in sizeUnit:
            fileDictGB[fileName] = float(size)
        elif 'TB' in sizeUnit:
            fileDictTB[fileName] = float(size)
        else:
            print("I could not determine the size unit, may be in MB!")
        # if counter > 20: break



### sort the datasets by descending sizes
sorted_dataset_by_size_GB = sorted(fileDictGB.items(), key=lambda x:x[1], reverse=True)
dict_dataset_by_size_GB = dict(sorted_dataset_by_size_GB)
sorted_dataset_by_size_TB = sorted(fileDictTB.items(), key=lambda x:x[1], reverse=True)
dict_dataset_by_size_TB = dict(sorted_dataset_by_size_TB)


outFile = open(outFileName, "w")
outFile.write("fileName\t\t\t\t\t\tsize\n")
outFile.write("------------------------------------------------\n")

for names in dict_dataset_by_size_TB:
    outFile.write(names+"\t"+str(dict_dataset_by_size_TB[names])+" TB \n")
for names in dict_dataset_by_size_GB:
    outFile.write(names+"\t"+str(dict_dataset_by_size_GB[names])+" GB \n")
        
outFile.close()