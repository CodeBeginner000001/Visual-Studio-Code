#include <iostream>
using namespace std;
int main()
{
    // Or Logic
    int a = 5;
    int b = 10;
    cout << "OR Logic in Bitwise Operator : " << (a | b) << endl;

    // And Logic
    int c = 5;
    int d = 10;
    cout << "AND Logic in Bitwise Operator : " << (a & b) << endl;

    // Not Logic
    int num = 1;
    cout << "NOT Logic in Bitwise Operator : " << (~num) << endl; // output : -2
    cout << "NOT Logic in Bitwise Operator : " << ~(num) << endl; // output : -2
    /* 
    when Negating the number goes through 1's Complement and when we display it, the number is now negative since the 
    Highest priority bit is 1 and since it is one it is considered as negative and steps to display negative we need to 
    take the 1's complement then 2's complement of the output of the 1's complement and since it is done on the binary level
    the output is 2 with a negative sign.
    For e.g., 
    num = 1
    memory level = 00000000 00000000 00000000 00000001
    1's Comp.    = 11111111 11111111 11111111 11111110

    now the number's highest priority bit is 1 so when it is being displayed the number is considered as negative due to 1
    so steps to display negative number is repeated

    memory level = 11111111 11111111 11111111 11111110
    ( - ) Sign = due to 1 in the highest priority bit
    1's Comp.    = 00000000 00000000 00000000 00000001
    2's Comp.    =                                  +1
                 = 00000000 00000000 00000000 00000010
    Decimal Form =  2
    That is why we have -2 as output 
    */
   int e = 5;
   int f =  5;
   cout << "XOR Logic in Bitwise Operator : " << (e ^ f) << endl;

    /* 
    Left Shift the number 
    so OUTPUT = a * 2^n
    Where,
    n = no of shift
    a = number on which shift is applied
    */
    int g = 7;
    cout << "LEFT SHIFT in Bitwise Operator by 1 : " << (g<<1) << endl;
    cout << "LEFT SHIFT in Bitwise Operator by 2: " << (g<<2) << endl;

    /* 
    Right Shift the number 
    so OUTPUT = a / 2^n
    Where,
    n = no of shift
    a = number on which shift is applied
    */
    int h = -5;
    cout << "RIGHT SHIFT in Bitwise Operator by 1 : " << (h>>1) << endl;
    cout << "RIGHT SHIFT in Bitwise Operator by 2: " << (h>>2) << endl;

    /* negative shift number */
    int j = 10;
    cout << "LEFT SHIFT in Bitwise Operator by 1: " << (j << -1) << endl;


    /* Pre/Post Increment/Decrement */
    int k = 20;
    cout<< "Pre-Increment : " << ++k << endl; // Output - 21
    // k-> 21
    cout<< "Post-Increment : " << k++ << endl; // Output - 21
    // k-> 22
    cout<< "Verifying :" << k << endl; // Output - 22
    // k-> 22
    cout<< "Pre-Decrement : " << --k << endl; // Output - 21
    // k-> 21
    cout<< "Post-Decrement : " << k-- << endl; // Output - 21

    /* Explicit Casting */
    double pi = 3.14159265;
    int intpi = (int)pi;
    cout<< "Converting double value to integer value : " << intpi <<endl;

    float floatingNumber = 65.345;
    char charValue = (char)floatingNumber;
    cout<< "Converting floating value to char value : " << charValue <<endl;

    int q = 10;
    int w = 3;
    float m = q/((float)w);
    cout<< "Converting integer value to float value : " << m << endl;
}