#include <fstream>

using namespace std;

int main() {
  ofstream outFile("output.txt");
  string name = "We are engineers!";
  outFile << name;
  outFile.close();
}
