package main

/*
Slice - 
1. Dynamic Size : - size can be increased and decreased dynamically
2. Ordered : - elements are stored in a particular order
3. Reference : - it is a reference to an array
4. Syntax : - similar to array but size is omitted
5. Examples : - - []int, []string, []int8, []int16,
6. Methods : - append, cap, copy, delete, equal, get, has, insert
7. Operations : - indexing, slicing
8. Use Cases : - dynamic array, stack, queue, deque
9. Use of make Function : - make function is used to create a slice with a specific length and capacity
10. Use of len Function : - len function is used to get the length of a slice
11. Use of cap Function : - cap function is used to get the capacity of a slice

website: - https://golangforall.com/en/post/golang-slice.html
*/
import (
	"fmt"
)

func main() {
	number := []int{1,2,3,4} // its like an array but size is not specified
	number = append(number,2,3,4,5) // adding elements to the slice
	fmt.Println("Number : ",number) // printing the slice
	fmt.Printf("Number has data type : %T\n",number) // printing the data type of the slice
	fmt.Println("Length : ",len(number)) // getting the length of the slice

	
	// Since the capacity and length is not defined the capacity will be equal to the length of the slice that is the data present in the slice
	number2 := []int{1,2,3} // its like an array but size is not specified
	fmt.Println("Number2 : ",number2) // printing the slice
	fmt.Println("Slice:", number2) // printing the slice
	fmt.Println("Length:", len(number2)) // getting the length of the slice
	fmt.Println("Capacity:", cap(number2)) // getting the capacity of the slice

	// using make function to create a slice with a specific length and capacity
	number3 := make([]int,3,5)
	fmt.Println("Number3 : ",number3) // printing the slice
	fmt.Println("Length:", len(number3)) // getting the length of the slice
	fmt.Println("Capacity:", cap(number3)) // getting the capacity of the slice

	// add the element to fill the capacity of the slice
	number3 = append(number3, 2 , 3)
	fmt.Println("Number3 : ",number3) // printing the slice
	fmt.Println("Length:", len(number3)) // getting the length of the slice
	fmt.Println("Capacity:", cap(number3)) // getting the capacity of the slice

	// What happen to capacity if we add more elements to slice
	number3 = append(number3, 4, 5, 6, 7)
	fmt.Println("Number3 : ",number3) // printing the slice
	fmt.Println("Length:", len(number3)) // getting the length of the slice
	fmt.Println("Capacity:", cap(number3)) // getting the capacity of the slice

	// new Capacity will be twice the current capacity
	number3 = append(number3, 8, 9, 10, 11)
	fmt.Println("Number3 : ",number3) // printing the slice
	fmt.Println("Length:", len(number3)) // getting the length of the slice
	fmt.Println("Capacity:", cap(number3)) // getting the capacity of the slice
}