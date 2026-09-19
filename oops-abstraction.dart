/*
Abstraction is a process of hiding the implementation details and showing only functionality to the user. In other words, it shows only essential things to the user and hides the internal details, which helps to reduce programming complexity and effort.
In abstraction, we can achieve it by using abstract classes and interfaces. An abstract class is a class that cannot be instantiated and is usually used as a base class. 
It can contain abstract methods (methods without implementation) that must be implemented by subclasses.
For example: 
abstract class Shape {
  void draw(); // abstract method
}
class Circle extends Shape {
  @override
  void draw() {
    print("Drawing Circle");
  }
}
*/
import "dart:io";
void main() {
  stdout.write("Enter Circle Radius: ");
  double radius = getDoubleValue();
  Circle circle = Circle(radius: radius);
  circle.draw();
  circle.getArea();
}

abstract class Shape {
  void draw(); // abstract method
  double getArea(); // abstract method
}

class Circle extends Shape {
  double radius;
  Circle({required this.radius});
  void draw() {
    print("Drawing Circle....");
  }
  double getArea() {
    double area = 3.14 * radius * radius;
    print("Area of Circle is: ${area}");
    return area;
  }
}

String getStringValue()=> stdin.readLineSync().toString();
double getDoubleValue()=> double.parse(getStringValue());
