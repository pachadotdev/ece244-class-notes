#include <iostream>
using namespace std;

int i[5] = {0, 2, 4, 6, 8};
int* p;

void foo() {
  cout << *p << endl;
  ++(*p);
  ++p;
}

void bar() {
  for (int i = 0; i < 3; ++i) {
    foo();
  }
}

int main() {
  p = i;
  bar();
  cout << "Check Point 1" << endl;
  p = i;
  foo();
  cout << "Check Point 2" << endl;
  return 0;
}
