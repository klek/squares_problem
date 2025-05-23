#!/bin/bash

set echo on

# Make sure the bin directory exists
mkdir -p bin

# Get a list of all .cpp files
cppFilenames=$(find . -type f -name "*.cpp")
includeDirs=""

assembly="main"
compilerFlags="-Wall -Werror -std=c++17"
linkerFlags=""
defines="-D_DEBUG"

outputDir="bin/squares.out"

#g++ main.cpp -o bin/a.out -Wall -Werror -std=c++17
echo "Building $assembly..."
# Print the build command
echo g++ -g $cppFilenames $compilerFlags -o $outputDir $defines $includeFlags $linkerFlags
g++ -g $cppFilenames $compilerFlags -o $outputDir $defines $includeDirs $linkerFlags
