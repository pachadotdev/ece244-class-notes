#include <iostream>
using namespace std;
int main() {
  int num = 0;
  int sum = 0;
  bool more = true;
  while (more) {
    cin >> num;
    if (cin.fail())
      more = false;
    else
      sum = sum + num;
  }
  cout << sum << endl;
  return (0);
}
