#ifndef BASH
echo "INSTALLING DEPENDENCIES..."
sudo apt-get install cmake g++
echo "RUNNING CMAKE..."
mkdir build
cd build
cmake ..
make
echo "RUNNING MAIN..."
./main
exit
#endif
#include <iostream>
int main(int argc, char **argv) {
  std::cout << "hahahahah!" << std::endl;
  return 0;
}
