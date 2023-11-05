// <>: searches in standard library locations
#include <iostream>

using namespace std;

// "": searches in current directory
#include "print.h"
#include "input.h"

int main() {
    int num;
    num = userInputNum();
    printNum(num);
    return 0;
}
