#include "bar.h"
#include "foo.h"

extern int __dso_handle;

int main(int argc, char **argv) {
  foo_func();
  bar_func();
  return 0;
}
