import 'dart:io';

void main() {

  print("Hello World"); // print used only for debugging 
  // user input
  stdout.write("Enter your name: "); // stdout.write used for printing in the same line
  // user input is always a string, so we need to convert it to the desired type
  String name = stdin.readLineSync().toString();
  print("Welcome, $name");

  stdout.write("Enter your age: ");
  int age = int.parse(stdin.readLineSync().toString());
  print("You are $age years old"); // string interpolation

  // function call
  int sum = add (1,2);
  print(sum);

  // user input based addition function
  stdout.write("Enter the first number: ");
  int no1 = int.parse(stdin.readLineSync().toString());

  stdout.write("Entert second number: ");
  int no2 = int.parse(stdin.readLineSync().toString());

  print("The Sum of two numbers is ${add(no1, no2)}");

  // function based user input based addition function
  stdout.write("Enter  number 1: ");
  int no3 = getIntValue();
  stdout.write("Enter number 2: ");
  int no4 = getIntValue();

  print("The Sum of two numbers is ${add(no3, no4)}");

}

int add(int a, int b, [int c = 0, int d = 0]) {
  return a + b + c + d;
}

String getStringValue() => stdin.readLineSync().toString();
int getIntValue()=> int.parse(getStringValue());