#include <iostream>
class Base {
protected:
 int data;
public:
 Base(int data) {
  this->data = data;
 }
 int getData() {
  return data;
 }
};
class Derived : public Base {
public:
 Derived(int data) : Base(data) {}
 int getDerivedData() {
  return data * 2;
 }
};
int main() {
 Base base(10);
 Derived derived(20);
 // Output: 10
 std::cout << base.getData() << std::endl;
 // Output: 20
 std::cout << derived.getData() << std::endl;
 // Output: 40
 std::cout << derived.getDerivedData() << std::endl;
 return 0;
}