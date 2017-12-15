#if false
g++ $0 -o .secret_main
./.secret_main
exit
#endif
#include <iostream>
int main(int argc, char **argv) {
  std::cout << "Hello, World!" << std::endl;
  return 0;
}
