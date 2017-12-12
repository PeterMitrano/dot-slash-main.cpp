#ifndef BASH
echo -e "\033[33mINSTALLING DEPENDENCIES...\033[0m"
echo ""
sudo apt-get install -qq cmake g++
echo ""
echo -e "\033[33mRUNNING CMAKE...\033[0m"
echo ""
mkdir -p build
cd build
cmake ..
make
echo ""
echo -e "\033[33mRUNNING MAIN...\033[0m"
echo ""
./main $@
exit
#endif
#include <cmath>
#include <cstdlib>
#include <iostream>

#include "sqrt.h"

int main(int argc, char **argv)
{
  if (argc != 2) {
    std::cout << "USAGE: sqrt number"
              << std::endl
              << std::endl
              << "EXAMPLE: sqrt 64"
              << std::endl;
    return 0;
  }

  char *end;
  double number = strtod(argv[1], &end);

  if (end == argv[1] || *end != '\0')
  {
    std::cout << "Invalid characters: [" << end << "]" << std::endl;
    return 0;
  }

  std::cout << sqrt(number) << std::endl;

  return 0;
}
