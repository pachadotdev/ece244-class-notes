#include <iostream>
using namespace std;

int main() {
  int* p = nullptr;
  int* q = nullptr;
  int* r = nullptr;
  int** t = &p;
  int** s = &q;
  r = p;
  p = new int;
  q = new int;
  *p = 5;
  *q = 2;
  **s = *p + **t;

  cout << "r " << r << endl;
  cout << "*t " << *t << endl;
  cout << "*q " << *q << endl;
  cout << "*p " << *p << endl;
  cout << "**t " << **t << endl;
  // cout << "*r " << *r << endl; // segmentation fault
  cout << "*s " << *s << endl;
  cout << "(**s) / 2 " << (**s) / 2 << endl;

  return 0;
}
