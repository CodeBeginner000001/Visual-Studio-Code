/*
-> Pointer is a variable that stores the memory address of the another variable. It is used to access the variable indirectly.
-> It is also known as reference variable.
-> A way to work with the memory directly, which can be useful for various programming tasks, including efficient memory
  management , data structures, and algorithms. Share data between functions

-> To declare a pointer we use the (*) asterisk symbol before the pointer name. For example, int *ptr;
*/

package main

import (
	"fmt"
)

func modfiyValueByReference (a *int){
	*a = *a * 2
}

func main() {
	fmt.Println("Learning pointer......")
	// var num int
	// num = 2
	num := 2

	// var ptr *int
	// ptr = &num
	ptr := &num

	fmt.Println("Num has value: ", num)                                 // 2
	fmt.Println("Ptr has value: ", ptr)                                 // 0x140000c0a0
	fmt.Println("Value at the address the pointer is pointing: ", *ptr) // 2

	/* pointers are initialized with nil by default if not explicity set to point to  valid memory address.
	   A nil pointer doesn't point to any valid memory location.
	*/
	var ptr2 *int
	if ptr2 == nil { // true
		fmt.Println("Ptr2 is nil") // Ptr2 is nil
	}
	/*
	Pointer are frequently used in Go to pass arguments to functions by reference. Allowing the function to modify the original value.
	This is particularly useful when dealing with large data structures where passing by value would be inefficient.
	*/
	value := 10
	modfiyValueByReference(&value)
	fmt.Println("Value after modification: ", value) // 20
}
