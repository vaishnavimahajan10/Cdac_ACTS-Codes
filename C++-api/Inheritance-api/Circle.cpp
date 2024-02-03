#include <iostream>
class Shape {
public:
 virtual void draw() = 0;
};
class Circle : public Shape {
public:
 Circle(int radius) : radius(radius) {}
 void draw() override {
  std::cout << "Drawing a circle with radius " << radius << std::endl;
 }
private:
 int radius;
};
class Rectangle : public Shape {
public:
 Rectangle(int width, int height) : width(width), height(height) {}
 void draw() override {
  std::cout << "Drawing a rectangle with width " << width << " and height " << height << std::endl;
 }
private:
 int width;
 int height;
};
int main() {
 Circle circle(5);
 Rectangle rectangle(10, 20);
 circle.draw();
 rectangle.draw();
 return 0;
}