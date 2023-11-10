#include <iostream>
using namespace std;

void increment(int& a) { a = a + 1; }
void decrement(int a) { a = a - 1; }
void doubling(int* a) { *a = (*a) * 2; }

int main() {
  int a = 3;
  increment(a);
  cout << a << endl;
  decrement(a);
  cout << a << endl;
  doubling(&a);
  cout << a << endl;
  return 0;
}
