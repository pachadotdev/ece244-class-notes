#include <iostream>
using namespace std;

void swap_by_p(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_by_r(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 200;
    int y = 100;
    swap_by_p(&x, &y);
    cout << x << " " << y << endl;
    swap_by_r(x, y);
    cout << x << " " << y << endl;
    return 0;
}
