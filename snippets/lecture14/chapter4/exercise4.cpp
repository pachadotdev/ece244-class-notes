#include <iostream>
using namespace std;

class Point {
  int x;
  int y;

 public:
  Point(int i, int j);
  Point increment_x();
  Point increment_y();
  void print() const;
};

Point::Point(int i, int j) {
  x = i;
  y = j;
}

Point Point::increment_x() {
  ++x;
  return *this;
}

Point Point::increment_y() {
  ++y;
  return *this;
}

void Point::print() const { cout << "(" << x << "," << y << ")" << endl; }

int main() {
  Point a(2, 3);
  // Evaluation is done left to right
  a.increment_x().increment_y().print();
  a.print();
  return 0;
}
