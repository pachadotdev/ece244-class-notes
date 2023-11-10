#include <iostream>

using namespace std;

void swap(int& x, int& y) {
  // no change
  int temp = x;
  x = y;
  y = temp;
}

int main() {
  // Pacha's note: I added the cout statements
  int x = 7, y = 13;
  cout << "Before swap: x = " << x << " y = " << y << endl;
  swap(x, y);
  cout << "After swap: x = " << x << " y = " << y << endl;
  return 0;
}
