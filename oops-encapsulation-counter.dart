class PrivateCounter {
  int _count = 0;
  void increment() {
    _count++;
  }
  void decrement() {
    if(_count>0){
      _count--;
    }
  }
  int get counter => _count; 
  set counter(int value) => _count = value;
}