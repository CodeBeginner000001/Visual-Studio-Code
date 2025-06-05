package main

import (
	"fmt"
)

func main() {
	fmt.Print("Learning......For LooP.....")
	for i := 0; i < 4; i++ {
		fmt.Println(i)
	}

	/*
	Infinite Loop with break statement
	for {
	.......
	} creates an infinite loop and can be exited using break statement

	break - used to exit the loop
	continue - used to jump to next iteration
	*/

	counter := 0
	for {
		fmt.Println("Infinite Loop", counter)
		counter++
		if counter == 3 {
			break
		}
	}

	/**
	In Go we dont have while or do-while loop we have only for and for-range loop
	range - the process of iterating over element in various types of collections, such as slice, array, maps and strings. It provide both index and value of each element in the collection.
	For example - if we have a number array then range number will return both index and value of the each element in the number slice 
	*/
	number := []int{1,2,3,4,5}
	for index, value := range  number {
		fmt.Println("Index:", index, ", Value:", value)
	}
	fmt.Println("Looping in string.......")
	data := "Hello! World"
	for index, value := range data {
		fmt.Println("Index:", index, ", Value:", string(value))
	}
}