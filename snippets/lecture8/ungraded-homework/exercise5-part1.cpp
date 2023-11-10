#include <iostream>
using namespace std;
int main() {
  int num = 0;
  int sum = 0;
  while (!cin.fail()) {
    cin >> num;
    sum = sum + num;
  }
  cout << sum << endl;
  return (0);
}
