// <>: searches in standard library locations
#include <iostream>

using namespace std;

// "": searches in current directory
#include "input.h"
#include "print.h"

int main() {
  int num;
  num = userInputNum();
  printNum(num);
  return 0;
}
