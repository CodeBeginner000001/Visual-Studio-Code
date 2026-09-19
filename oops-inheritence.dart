
// Inheritance in Dart
/**

Inheritance is a like you inherting the properties or behaviors of your parents.

** Proper Defination of Inheritance:
Inheritance is a mechanism in which one class acquires the properties (fields) and behaviors (methods) of another class. 
The class that inherits the properties of another class is called the subclass (or derived class, child class), and 
the class whose properties are inherited is called the superclass (or base class, parent class).

For Example:
class B extends A {
  // B is the subclass and A is the superclass
}

class HumanBeing {
  void eat() {
    print("Eating");
  }
  inhale() {
    print("inhaling O2 gas.....")
  }
  exhale() {
    print("exhaling CO2 gas.....")
  }
}
class Male extends HumanBeing{}
class Female extends HumanBeing{}

void main() {
    Male m1 = Male();
    m1.inhale();
    m1.exhale();
}
*/
void main() {
  Male m1 = Male();
  m1.inhale();
  m1.exhale();

  print("\nAnimal inherting the properties of Living Being class and dog is inherting the properties of Animal class");
  Dog D1 = Dog();
  D1.inhale();
  D1.exhale();
  D1.walk();
  D1.bark();
}

class LivingBeing {
  void eat() {
    print("Eating");
  }
  inhale() {
    print("Inhaling O2 gas.....");
  }
  exhale() {
    print("Exhaling CO2 gas.....");
  }
}
class Male extends LivingBeing{}
class Female extends LivingBeing{}

class Animal extends LivingBeing{
  void walk() {
    print("Walk on 4 legs");
  }
}
class Dog extends Animal{
  void bark() {
    print("Barking");
  }
}
class Cat extends Animal{
  void meow() {
    print("Meowing");
  }
}
/*
Type of Inheritance in Dart:
1. Single Inheritance: A class can inherit the properties of another class.
   This is the most common type of inheritance. This involves a superclass and a subclass. The subclass inherits the properties of the superclass.
   * Dart supports single inheritance.
   For example: Male and Female class are inheriting the properties a LivingBeing class.

2. Multilevel inheritance: A class can inherit the properties of another class, which in turn inherits the properties of another class.
   This is also known as hierarchical inheritance. This involves a superclass, a subclass, and a sub-subclass. 
   The sub-subclass inherits the properties of the subclass, which in turn inherits the properties of the superclass.
   * Dart supports multilevel inheritance.
   For example: 
    Dog class inherits the properties of Animal class and Animal class inherits its properties from living being class.

3. Multiple inheritance: A class can inherit the properties of multiple classes. 
   This is also known as hybrid inheritance. This involves multiple superclasses and a subclass. 
   The subclass inherits the properties of all the superclasses.
   * Dart does not support multiple inheritance. But we can achieve multiple inheritance using mixins.

4. Hierarchical inheritance: B class can inherit the propeties of A class, and C class can also inherit the properties of A class. 
   This is also known as multiple inheritance. This involves a superclass and multiple subclasses. 
   The subclasses inherit the properties of the superclass.
   * Dart supports hierarchical inheritance.
   For example: Male, Female and Animal classes are inheriting the properties of LivingBeing class. 

5. Hybrid inheritance: B and c are two classes that inherit their properties from class A. Now D class inherits the properites of both B and C classes.
    * Dart Supports Hierarchical inheritance 
    that we can see in B and C classes but
    * Dart does not support multiple inheritance 
    that we can see in D class.
    * Hence Dart does not support hybrid inheritance.
*/
