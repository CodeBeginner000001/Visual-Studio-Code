/**
    When functions are able to handle or use functions as parameters or function as data
    then they are called HIGH ORDER FUNCTIONS
 */
void main() {
  // print(add(5, 11));
  //
  // operation((){
  //   print("Hi, I am fallback function");
  // }); // call back function

  // operation(add3); // now only int function can be passed whose handles int and return int
  // operation((no1, no2) { // now int is handled and int is returned from this passed function
  //   return no1 * no2;
  // });

  List<int> no = List.generate(10, (index) {
    return index + 1;
  });
  print(no);
}

int add(int no1, int no2) {
  return no1 + no2;
}

int add2(int no1, int no2, int no3) => no1 + no2 + no3;

int Function(int, int) add3 = (int no1, int no2) {
  // anonymous function
  // made a variable as a function
  return no1 * no2;
};

void operation(int Function(int, int) test) {
  print(test(5, 6));
}
