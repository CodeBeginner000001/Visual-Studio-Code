/**

 Interface: Any class can be interface if we use implements instead of extends
 Interface are alternative of multiple inheritance.
 when using implements in the class we need to override the method defination of the superclass
 else Error will be through "concrete implementation missing of the functions...."
 ** So By overriding the method defination we can implement multiple inheritance using interfaces

 What interface actually is 
 We will implements superclasses methods but in our own ways through this you can implements multiple superclass
 method in a single subclass.

 */

class OperationsInterface {
  int add(int no1, int no2) {
    return no1 + no2;
  }

  int sub(int no1, int no2) {
    return no1 > no2 ? no1 - no2 : no2 - no1;
  }
}

class MoreOperationsInterface {
  int multiply(int no1, int no2) {
    return no1 * no2;
  }

  int division(int no1, int no2) {
    return no2 != 0 ? no1 ~/ no2 : 0;
  }
}

class A implements OperationsInterface, MoreOperationsInterface {
  @override
  int add(int no1, int no2) {
    return 2 * (no1 + no2);
  }

  @override
  int sub(int no1, int no2) {
    return 2 * no1 - 2 * no2;
  }

  @override
  int division(int no1, int no2) {
    // TODO: implement division
    throw UnimplementedError();
  }

  @override
  int multiply(int no1, int no2) {
    // TODO: implement multiply
    throw UnimplementedError();
  }
}

/**
 Mixin: Used when we need to inherit the properties of the superclasses in the subclass and not overeride then
 we use mixin in a class declaration.

 ** mixin class we help use to use mixin classes members to be used into one class members
 ** If same method is present in different mixins class then the definition of the last declared 
 ** (when mentioning superclasses in subclass) mixin class we overide all the definition of the same class
 For Example:
 -> Check AB class, MoreOperation is declared in the end of the Operation class so the check function defintion
 of MoreOperations will override the definition in the Operations class.
 -> Check BC class, Operation is declared in the end of the MoreOperation class so the check function defintion
 of Operations will override the definition in the MoreOperations class.

 */
void main() {
  AB test = AB();
  print("Operation From Operation class: ${test.add(5, 6)}");
  print("Operation From Operation class: ${test.sub(5, 6)}");
  print("Operation From MoreOperation class: ${test.multiply(5, 6)}");
  print("Operation From MoreOperation class: ${test.division(5, 6)}");
  test.check();

  BC test2 = BC();
  test2.check();
}

mixin Operations {
  int add(int no1, int no2) {
    return no1 + no2;
  }

  int sub(int no1, int no2) {
    return no1 > no2 ? no1 - no2 : no2 - no1;
  }

  void check() {
    print("Hi, i am operations class");
  }
}

mixin MoreOperations {
  int multiply(int no1, int no2) {
    return no1 * no2;
  }

  int division(int no1, int no2) {
    return no2 != 0 ? no1 ~/ no2 : 0;
  }
  void check() {
    print("Hi, i am more operations class");
  }
}

class AB with Operations, MoreOperations {}
class BC with MoreOperations, Operations {}
