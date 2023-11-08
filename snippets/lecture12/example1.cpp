class ComplexNum {
 public:
  double real;
  double img;
  ComplexNum* next;

  ComplexNum() {
    real = 0;
    img = 0;
    next = nullptr;
  }

  ~ComplexNum() {
    if (next != nullptr) delete next;
  }
};

int main() {
  ComplexNum* px = new ComplexNum;
  px->next = new ComplexNum;
  px->next->real = 8;
  delete px;
  return 0;
}
