package main
import "fmt"

func simpleFunction() {
	fmt.Println("Simple function")
}
func add (a,b int)(int) { //  func add (input datatype) (output ka datatype) { logic.....}
	return a + b // in this function a,b has same datatype that is int
}
func sub (a int ,b int)(int) { //  func add (input datatype) (output ka datatype) { logic.....}
	return a - b // in this function a and b has same datatype but in this format we can have different datatype
}

func mul (a,b int) (result int){
	result = a * b  // in this value in result is returned  but return can directly be used as shown above
	return
}
func main() {
	fmt.Println("Hello Function in Go Lang")
	simpleFunction()
	ans:= add(3,4)
	fmt.Println("Sum of two numbers are :",ans)
	ans1:= sub(4,3)
	fmt.Println("Difference of two numbers are :",ans1)
	ans2:= mul(4,3)
	fmt.Println("Multiplication of two numbers are :",ans2)
}