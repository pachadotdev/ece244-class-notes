#include <iostream>
using namespace std;

int main() {
  int* first_ptr;
  int* second_ptr;
  int** p_ptr;
  first_ptr = new int;
  second_ptr = new int;
  p_ptr = &first_ptr;
  *first_ptr = 4;
  *second_ptr = 8;
  second_ptr = *p_ptr;
  cout << *first_ptr << " " << *second_ptr << endl;
  delete first_ptr;
  delete second_ptr;
  delete *p_ptr;
  return (0);
}