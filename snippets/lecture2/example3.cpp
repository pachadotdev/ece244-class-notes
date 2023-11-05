#include <iostream>
#include <string>

using namespace std;

int main() {
    // == compares strings
    string courseDepart, courseNum, courseCode;
    cout << "Enter the course department and code: " << endl;
    cin >> courseDepart >> courseNum;
    courseCode = courseDepart + courseNum;
    if (courseCode == "ECE244") {
        cout << "That's Programming Fundamentals" << endl;
    }
    return 0;
}
