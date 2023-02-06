# Caesar.SDD

This tool simulates the behavior of Caesar.BDD model-checker of CADP, but uses hierarchical Set Decision Diagrams (SDD) rather than BDD.

# Author

This tool was developped by Alexandre Hamez.

# Download

- After cloning the repo, `mkdir build ; cmake ../ ; make` should build the tool. Pass `-DLIBSDD_PATH=/path/to/libsdd` to cmake.

- We also distribute the tool as a static binary for Linux x64 :  [caesar.sdd](https://github.com/yanntm/pnmc/raw/gh-pages/caesar.sdd). These binaries are built from latest versions of source using GitHub actions (see "actions" tab at top of this page)
