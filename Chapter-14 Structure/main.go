package main
import (
	"fmt"
)

/*
First Letter of the function or the structure are made capital letter so that it can be accessed from outside the package
*/

type person struct {
	firstName string
	lastName  string
	age       int
}

func main() {
	fmt.Println("Learning structure..........")
	var John person // declare a variable of type person

	fmt.Println("Person : ",John) // prints {  0}

	// Assigning values to the structure one by one
	John.firstName = "John" // assign value to the field
	John.lastName = "Doe" // assign value to the field
	John.age = 30 // assign value to the field
	fmt.Println("Person : ",John) // prints {John Doe 30}

	// Assigning values to the structure at once
	person1 := person{
		firstName: "John",
		lastName:  "Cena",
		age:       54,
	}
	fmt.Println("Person : ",person1) // prints {John Cena 54}

	// new Keyword
	/*
	new is use to allocate memory for the type and return the address of the allocated memory
	*/
	John2 := new(person)
	John2.firstName = "John"
	John2.lastName = "Doe"
	John2.age = 30
	fmt.Println("Person : ",John2) // prints &{John Doe 30}
	fmt.Println("Person Name : ",John2.firstName) // prints John
	fmt.Println("Person Age: ",John2.age) // prints 30
	fmt.Println("Person : ",*John2) // prints {John Doe 30}

	/* If age is not stored or any variable that is not introduced and is accessed it will return the default value of the data type */
	 
}