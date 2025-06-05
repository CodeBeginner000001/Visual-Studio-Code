package main

import "fmt"

func main() {
	fmt.Println("Hello")

	var name string = "John"
	fmt.Println("String Example: ", name)
	var version = "version 2.0"
	fmt.Println("String Example 2: ", version)

	var num int = 6400
	fmt.Println("Integer datattype example: ", num)
	var currency = 432
	fmt.Println("integer datatype example 2: ", currency)

	var decimal float64 = 43.23
	fmt.Println("float64 example : ", decimal)
	var point = 4342.23
	fmt.Println("float example2: ", point)

	var checking bool = false
	checking = true
	fmt.Println("Bool example:", checking)

	const pi  = 3.14
	// pi = 43.2 // will throw error as it cant be changes
	fmt.Println("constant exmaple: ",pi);

	// it's a short to directly assign a value to a varibale
	person:=123
	fmt.Println(person)

	var private = "data is private" // this can be used in this file only
	var Public = "data is public" // this can be used in this file as well as can be exported and used in other files and Package
	/* so just to export a variable or a function just start the name with capital letter*/
	fmt.Println(private," , ", Public)
}

