#include <iostream>

using namespace std;

class Person {
 private:
  string name;
  int age;

 public:
  Person() {
    name = "";
    age = 0;
  }
  Person(string n, int a) {
    name = n;
    age = a;
  }
  void setName(string n) { name = n; }
  void print() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};
