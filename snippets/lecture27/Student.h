#include <iostream>

using namespace std;

class Student : public Person {
 private:
  int ID;

  // age and name are innaccessible

  // we don't inherit constructors of Person

 public:
  Student() { ID = 0; }
  using Person::setName;

  // setName is inherited
  void setNameID(string n, int d = 0) {
    Person::setName(n);
    ID = d;
  }

  // cancel/overwrite the print function inherited from Person
  // we write our own
  void print() {
    // I can't access age and name
    Person::print();
    cout << "ID: " << ID << endl;
  }
};
