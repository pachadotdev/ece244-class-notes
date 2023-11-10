#include <iostream>

using namespace std;

// Function declaration
int factorial(int n);  // or int factorial(int);

// for int factorial(int);
// the first int is the return type
// the second int is the parameter type

int main() {
  int n = 4;
  // fact: return value stored in fact
  // factorial(n): pass variable
  int fact = factorial(n);
  cout << "Factorial of " << n << " is " << fact << endl;
  return 0;
}

// Function definition
int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}
