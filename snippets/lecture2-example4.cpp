#include <iostream>

using namespace std;

// Function definition
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n = 4;
    // fact: return value stored in fact
    // factorial(n): pass variable
    int fact = factorial(n);
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}
