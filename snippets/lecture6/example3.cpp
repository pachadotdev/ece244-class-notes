#include <fstream>

using namespace std;

int main() {
    ifstream inputFile;
    inputFile.open("myFile.txt");

    // or ifstream inputFile("myFile.txt");
    // to replace the two lines above

    int num1, num2, num3;

    // input from file
    inputFile >> num1 >> num2 >> num3;

    inputFile.close();

    return 0;
}
