void main() {
  // this User() -> this is the constructor of the class User that we calling to create a class instance

  /**
   Using the way of creating a class instance, the code readability is very low because we can't understand what the parameters are for. 
   * User u1 = User("Alice", 25);
  */
  User u1 = User(name: 'Alice', age: 25);
  u1.checkEligibility();
  print("${u1.name} is eligible: ${u1.isEligible}");

  // So, we can use named parameters to improve the code readability. To make a function parameter named, we need to use curly braces {} in the function definition.
  User u2 = User(name: "Bob", age: 15);
  u2.checkEligibility();
  print("${u2.name} is eligible: ${u2.isEligible}");
}

class User {
  // attributes of the class
  String name;
  int age;
  bool isEligible = false;

  /* 
  This is a parameterized constructor of the class User. It takes two parameters, name and mAge, and initializes the class attributes with the values passed to it.
  We required to initialize the parameter again in the constructor to store the value in the class attributes.
  But if we need to use the same name for the parameter and the attribute, we can use the 'this' keyword to refer to the class attribute.

  User(String name, int mAge){
    this.name = name;
    age = mAge;
  }

  * Using 'this' keyword directly in the constructor parameters to initialize the class attributes.
  User(this.name, this.age);

  */
  /* Using named parameters in the constructor to improve code readability.
   Using curly braces {} to define named parameters in the constructor makes it optional to pass the parameters while creating the class instance.
   but we can use the 'required' keyword to make the parameters mandatory while creating the class instance.
  */
  User({required this.name, required this.age});

  void checkEligibility() {
    if (age >= 18) {
      this.isEligible = true;
    }
  }
}
