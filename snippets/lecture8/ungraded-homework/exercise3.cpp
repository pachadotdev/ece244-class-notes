#include <iostream>
#include <string>

using namespace std;

void readInts() {
  int num;
  cin >> num;

  while (!cin.fail()) {
    cout << num << endl;
    cin >> num;
  }

  cin.clear();

  string chr;
  cin >> chr;

  if (chr == ".") {
    cout << "Done" << endl;
  } else {
    cout << "Error" << endl;
  }
}

int main() {
  readInts();
  return 0;
}
