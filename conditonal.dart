import 'dart:io';
import 'dart:math';

void main() {
  print("Enter your age: ");
  int age = getIntValue();
  if(age >= 18) {
    print("You are an adult");
  } else {
    print("You are a minor");
  }

  print("Enter your weight: ");
  double wt = getDoubleValue(); // used for decimal input values
  print("Enter your height in meters: ");
  double ht = getDoubleValue();
  double bmi = wt/pow(ht, 2);
  print("Your BMI is $bmi");
  if(bmi < 18.5) {
    print("You are underweight");
  } else if(bmi >= 18.5 && bmi <= 24.9) {
    print("You are normal weight");
  } else if(bmi >= 25 && bmi <= 29.9) {
    print("You are overweight");
  } else {
    print("You are obese");
  }
}

String getStringValue() => stdin.readLineSync().toString();
int getIntValue() => int.parse(getStringValue());
double getDoubleValue() => double.parse(getStringValue());
