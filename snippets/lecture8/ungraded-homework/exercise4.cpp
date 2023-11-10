#include <iostream>
using namespace std;
#include <sstream>
#include <string>
// function prototype
bool handle_count(stringstream& lineStream, int& intArg);

int main() {
  string line;
  string command;
  int intArg;
  getline(cin, line);
  stringstream lineStream(line);
  lineStream >> command;
  if (command == "count") {
    if (handle_count(lineStream, intArg)) {
      cout << "Integer argument is " << intArg << endl;
      return (0);
    } else {
      cout << "Invalid arguments" << endl;
      return (-1);
    }
  } else {
    cout << "Invalid command" << endl;
    return (-1);
  }
}

bool handle_count(stringstream& line, int& intArg) {
  line >> intArg;

  if (line.fail()) {
    return false;
  }

  string dummy;
  line >> dummy;

  if (line.fail()) {
    return true;
  } else {
    return false;
  }
}
