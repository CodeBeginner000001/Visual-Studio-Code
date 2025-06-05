package main

import (
	"fmt"
	"strconv"
)
func main() {
	fmt.Println("Learning Data conversion.......")
	var num int = 42 
	fmt.Println("Number is: ",num) // Output: Number is: 42
	fmt.Printf("Type of num is %T\n",num) // Output: Type of num is int

	var data float64 = float64(num) // Explicit conversion
	data+=1.23 // Adding a float64 value to the data
	fmt.Println("Data is: ",data) // Output: Data is: 43.23
	fmt.Printf("Type of data is %T\n",data) // Output: Type of data is float64

	num=123 // Assigning a new value to num
	str:= strconv.Itoa(num) // Converting num to string
	fmt.Println("Str is: ",str) // Output: Str is: 123
	fmt.Printf("Type of str is %T\n",str) // Output: Type of str is string

	number_string := "1234" // Assigning a string to number_string
	number_int, _ := strconv.Atoi(number_string) // Converting number_string to int
	number_int+= 267543 // Adding a value to number_int
	fmt.Println("Number_int is: ",number_int) // Output: Number_int is: 268777
	fmt.Printf("Type of number_int is %T\n",number_int) // Output: Type of number_int is int

	num_string := "3.14" // Assigning a string to num_string
	num_float, _ := strconv.ParseFloat(num_string,64) // Converting num_string to float64
	fmt.Println("Number_int is: ",num_float) // Output: Number_int is: 3.14
	fmt.Printf("Type of number_int is %T\n",num_float) // Output: Type of number_int is float64
}