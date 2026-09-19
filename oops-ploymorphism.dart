// Polymorphism in Dart
/**
 * Poly - Many
 * Morphism - Forms 
 * Ism - Process
 ** Means having many forms or ability to take many forms.
 We have two types of polymorphism in Dart:
  1. Compile-time polymorphism (static) - Multiple forms made in compile time. Means method overloading and operator overloading.
  2. Run-time polymorphism (dynamic) - Multiple forms made in run time. Means method overriding.

  ** Method Overloading: It is a feature that allows class to have many methods with same name but different list of parameters. 
  Example: 
  class A {
    int add (int a, int b) {
      return a + b;
    }
    int add (int a, int b, int c) {
      return a + b + c;
    }
  }
  ** Dart does not support method overloading. means it doesn't support compile-time polymorphism. 
  ** But we can achieve method overloading using optional parameters or named parameters. 
  for example: 
  ->  int add (int a, int b, [int c = 0]){ // optional parameter
        return a + b + c;
      }
  -> int add (int a, int b, {int c = 0}){ // named parameter
        return a + b + c;
      }
  so calling will be like this:
  ** When using optional parameters
  -> add(1, 2); // 3
  -> add(1, 2, 3); // 6
  ** When using named parameters
  -> add(1, 2); // 3
  -> add(1, 2, c: 3); // 6

  ** Method Overriding: It is a feature that allows subclass to provide a specific implementation of a method that is already provided by its superclass.
  Example:
  class A {
    void display() {
      print("Display method of class A");
    }
  }
  class B extends A {
    @override
    void display() {
      print("Display method of class B");
    }
  }
  ** Dart supports method overriding. means it supports run-time polymorphism.
 */

void main() {
  A a = A();
  print(a.add(a:5, b:6));

  B b = B();
  print(b.add(a:5, b:6));
}

class A {
  int add ({required int a, required int b})
  {
    return a + b;
  }
}
class B extends A {
  // (a+b)^2
  @override
  int add ({required int a, required int b})
  {
    // super keyword is used to call the method of superclass. 
    // while this keyword is used to call the method of current class.
    int sum = super.add(a: a, b: b);
    return sum * sum;
  }
}
