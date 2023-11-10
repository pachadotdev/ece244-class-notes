#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  int ID;

  string name;
  string inputLine = "1001 Joe";

  // create a string stream initialized with input line
  stringstream myStringStream(inputLine);

  myStringStream >> ID;    // takes input into ID
  myStringStream >> name;  // takes input into name

  cout << "Name: " << name << endl << "ID: " << ID << endl;

  myStringStream << name << ID;

  // converts a string stream to a string to print it
  cout << myStringStream.str() << endl;

  return 0;
}