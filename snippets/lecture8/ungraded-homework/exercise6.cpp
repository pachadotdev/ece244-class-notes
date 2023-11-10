#include <iostream>

using namespace std;

void readInts() {
  // pass number from cin
  int num;
  cin >> num;

  // print until end of file
  while (!cin.eof()) {
    if (cin.fail()) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Invalid Input" << endl;
      cin >> num;
    } else {
      cout << num << endl;
      cin >> num;
    }
  }
  cout << "End of File Reached" << endl;
}

int main() {
  readInts();
  return 0;
}
