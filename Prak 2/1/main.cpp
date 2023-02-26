// main.cpp
#include "A.hpp"
#include "B.hpp"

int main() {
  B b = B();
  A& br = b;
  br.setValue(888);
  b.setValue(10888);
  b.print();
  return 0;
}