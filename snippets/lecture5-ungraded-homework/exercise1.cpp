#include <iostream>
using namespace std;

// Forward function
void hello(int i);  

int main() {
  hello(1);
  return 0;
}

// Function definition
void hello(int i) {
    cout << "Hello !" << i << endl;
    return;
}
