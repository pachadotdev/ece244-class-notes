#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  int ID;
  string name, inputLine;
  getline(cin, inputLine);

  stringstream ss;
  // write into ss
  ss << inputLine;

  // or stringstream ss(inputLine);

  // read from ss
  ss >> ID;    // ID reads 1001
  ss >> name;  // name reads Joe

  cout << ss.str() << endl;  // ss still has content written to it "1001 Joe"

  return 0;
}
