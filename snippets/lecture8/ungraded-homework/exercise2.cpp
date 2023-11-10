#include <fstream>
#include <iostream>
using namespace std;

int main() {
  int a;
  ifstream inFile;
  inFile.open("input.txt");
  if (inFile.fail()) {
    return 1;
  }
  while (1) {
    inFile >> a;
    if (inFile.fail()) {
      cout << "failed.." << endl;
      // inFile.clear(); // COMMENTED OUT
      inFile.ignore(100, '\n');
      continue;
    }
    cout << "a = " << a << endl;
    break;
  }
  return 0;
}
