#include <iostream>

using namespace std;

int main() {
  int** p2p;
  int *p, *q;

  p = new int;
  *p = 5;

  p2p = &p;
  q = *p2p;  // *(&p) = p

  *q = 8;  // the new int

  cout << **&p2p;  // **(&p) = *p = the new int, prints 8

  return 0;
}
