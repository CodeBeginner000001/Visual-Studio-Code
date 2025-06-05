package main
import "fmt"
func main() {
	age:= 25
	name:= "Rocky"
	height:= 5.8342342
/* 
println format the data and switch to next line when new line displayed using this and 
add spaces between the two statement or variable when entered with a comma(,) in between 
*/
	fmt.Println("age:",age,"name:",name,"height:",height)
	fmt.Println("Hello new line")
/*
Printf works with format specifier that is we need specify the format in which we want to look at our data
*/
	fmt.Printf("Age: %d\n",age) // this will display the number and jump to next line 
	fmt.Printf("Name: %s\n",name)
	fmt.Printf("Heigh: %.2f\n",height) // show only two decimal places
	fmt.Printf("Type of variable: %T\n",name)
	fmt.Printf("Type of variable: %T\n",age)
	fmt.Printf("Type of variable: %T\n",height)
	fmt.Printf("Name: %s, Age: %d, Height: %.4f\n",name,age,height)
}