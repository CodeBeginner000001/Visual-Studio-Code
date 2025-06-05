// all the go files should have same packge if they are in the same directory and if we want to use different package or 
// what to create a package then subdirectory form can be used to so.
package main // main package should be present to make the code the executable

import (
	"fmt" // used to print 
	"mylearning/myutil" // importing file functions 
)

func main() {
	fmt.Println("Hello world")
	myutil.Printmessage("GG enjoy match-----")
	fmt.Printf("Sum is: ")
	myutil.Sum(5,4)
}