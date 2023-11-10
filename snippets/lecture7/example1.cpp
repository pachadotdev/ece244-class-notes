#include <iostream>

using namespace std;

int main() {
  int num = 0;
  cout << "Enter a number:" << endl;
  cin >> num;

  // if cin.fail() is true,
  // cin.ignore() will fail too
  while (cin.fail()) {
    // do not swtich the order
    // we must clear first
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Try again!" << endl;
    cin >> num;
  }

  cout << "The number entered is " << num;

  return 0;
}
