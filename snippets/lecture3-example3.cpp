#include <iostream>

using namespace std;

void printNum(int x);
int userInputNum();

int main() {
    int num;
    num = userInputNum();
    printNum(num);
    return 0;
}

void printNum(int x) {
    cout << "The number is " << x << endl;
}

int userInputNum() {
    int x;
    cout << "Enter integer: ";
    cin >> x;
    return x;
}
