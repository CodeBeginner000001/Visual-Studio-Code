package main
import (
	"fmt"
)

func main() {
	fmt.Print("Learning Array.........")

	var name[5]string  //initializing array without defining data
	name[0] = "Ram"
	name[1] = "Aditya"
	fmt.Println("Names of Person is :",name) // All the 5 elements will be printed 0,1 will have the data and rest will have "" which is a space

	var number1 = [8]int{1,2,4,2} // initializing array with data
	fmt.Println("Number is : ",number1) // it will print all the elements of the array
	fmt.Println("Length of the number1 array is : ",len(number1)) // it will print the length of the array
	fmt.Println("Vlue at index 2 in number1 aray is : ",number1[2]) // it will print the value at index 2

	/*
	For int and float the values with which the array will be created - 0
	For string the values with which the array will be created - ""
	For bool the values with which the array will be created - false
	For byte the values with which the array will be created - 0
	For rune the values with which the array will be created - \u0000
	For complex the values with which the array will be created - nil
	*/
	var price[5]int 
	fmt.Println("Price is : ",price) // [0,0,0,0,0]

	var decimal[5]float64
	fmt.Println("Decimal is : ",decimal) // [0,0,0,0,0]

	var statement[5]string
	fmt.Println("Statement is : ",statement) // [     ]
	fmt.Printf("Statement is %q \n",statement) // ["" "" "" "" ""]
	statement[0] = "John"
	statement[2] = "Raj"
	fmt.Printf("Statement is %q \n",statement) // ["John" "" "Raj" "" ""]

	var reason[5]bool
	fmt.Println("Reason is : ",reason) // [false false false false false]
}