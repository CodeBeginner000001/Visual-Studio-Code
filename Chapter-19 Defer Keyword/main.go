package main
import (
	"fmt"
)

func add(a,b int) int {
	return a+b
}

func main() {
	fmt.Println("Learning about Defer keyword....................") // prints: Learning about Defer keyword....................
	data := add(5,6) // data = 11
	fmt.Println("Starting of the program") // prints: Starting of the program
	defer fmt.Println("Data is : ", data) // prints: Data is :  11
	defer fmt.Println("Middle of the program") // prints: Middle of the program
	fmt.Println("End of the program") // prints: End of the program
	
	/* The output will be data is : 11 in the end and it is due to 
	stack as first defer line is sent to stack and then the second line so since Stack follows LIFO order 
	that is Last In First out so the last defer line is executed first 
	*/
}