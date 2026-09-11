import "dart:io";
void main() {
  List<String> names = ['Raman', 'Rajeev', 'Raghav', 'Ramanujan'];

  // for each loop
  stdout.write('\nStandard for each loop:\n');
  for(String name in names) {
    print(name);
  }

  // standard for loop
  stdout.write('\nStandard for loop:\n');
  for(int i = 0; i <= names.length-1; i++) {
    print(names[i]);
  }

  // for loop in list
  stdout.write('\nFor loop in list:\n');
  List<int> numbers = [1,2,3,4,5];
  List<int> newList = [23,24,52, for(int i in numbers) i*2, ...numbers, if(numbers.length<4) 11];
  print(numbers);
  print(newList);
}