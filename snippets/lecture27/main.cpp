#include "Person.h"
#include "Student.h"

int main() {
  Person p("Joe", 23);
  Student s;  // 2 constructors are called
  // 1st is Person() default constructor
  // 2nd is Student() default constructor
  p.setName("Joseph");
  p.print();  // print name and age

  s.setNameID("Ryan");  // setNameID is inherited from Person
  s.print();  // we invoke print on Student object, hence we call print of
              // Student, not of person

  s.setNameID("Marina", 125);
  s.print();

  return 0;
}
