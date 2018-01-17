#!/bin/bash

cd build

make clean
time make reckless_headers
make clean
time make reckless_headers
make clean
time make reckless_headers

make clean
time make careful_headers
make clean
time make careful_headers
make clean
time make careful_headers

cd ..
