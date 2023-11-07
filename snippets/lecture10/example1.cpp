class Student {
 private:
  int* grades;

 public:
  Student();
  Student(int);
  // destructors must be public
  // a destructor has no return, like constructors
  // also it has no parameters
  ~Student();
};

Student::Student() { grades = nullptr; }

Student::Student(int numLabs) { grades = new int[numLabs]; }

Student::~Student() {
  if (grades != nullptr) {
    delete[] grades;
  }
}

int main() {
  // dynamically allocates 7 integers
  // if we do not de-allocate, this creates a memory leak
  Student x(7);
}
