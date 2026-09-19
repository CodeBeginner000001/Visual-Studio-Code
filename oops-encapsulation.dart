/**
Encapsulations
Wrapping same or similar components into one components are encapsulation.
Access Modifiers
-> Private
-> Public
-> Protected
and other is default

but in
** Dart: We do not have access modifiers
But in dart to make any thing private
Add underscore "_" when declared it wont be class specfic it will be package specfic that is file only
*/
import "oops-encapsulation-counter.dart";
void main() {

  // This is when we can directly access counter which can be manipulated
  // but a counter can't be manipulated so we will make it private
  Counter c = Counter();
  print(c.count);
  c.increment();
  print(c.count);
  c.increment();
  print(c.count);
  c.increment();
  c.count = 11;
  print(c.count);
  c.decrement();
  print(c.count);
  c.decrement();

  print("\nPrivate counter can't be modified");

  PrivateCounter Pc = PrivateCounter();
  // print(Pc.count); // as it is private we can't access it.
  print(Pc.counter);
  Pc.increment();
  print(Pc.counter);
  Pc.increment();
  print(Pc.counter);
  Pc.counter = 5;
  Pc.increment();
  print(Pc.counter);
  Pc.decrement();
  print(Pc.counter);
  Pc.decrement();
}

class Counter {
  int count = 0;
  void increment() {
    count++;
  }
  void decrement() {
    if(count>0){
      count--;
    }
  }
}