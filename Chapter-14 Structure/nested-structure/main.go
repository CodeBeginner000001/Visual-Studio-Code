package main
import (
	"fmt"
)

/*
First Letter of the function or the structure are made capital letter so that it can be accessed from outside the package
*/

type Person struct { // structure
	firstName string
	lastName  string
	age       int
}
type Contact struct { // structure
	Email string
	Phone string
}
type Address struct { // structure
	House int
	Area string
	State string
}
type Employee struct { // structure
	Employee_Details Person // embedded structure
	Employee_Contact Contact // embedded structure
	Employee_Address Address // embedded structure
}


func main() {
	fmt.Println("Learning structure..........")
	var John Person // declare a variable of type person

	fmt.Println("Person : ",John) // prints {  0}

	// Assigning values to the structure one by one
	John.firstName = "John" // assign value to the field
	John.lastName = "Doe" // assign value to the field
	John.age = 30 // assign value to the field
	fmt.Println("Person : ",John) // prints {John Doe 30}

	// Assigning values to the structure at once
	person1 := Person{
		firstName: "John",
		lastName:  "Cena",
		age:       54,
	}
	fmt.Println("Person : ",person1) // prints {John Cena 54}
	/* If age is not stored or any variable that is not introduced and is accessed it will return the default value of the data type */
	// new Keyword
	/*
	new is use to allocate memory for the type and return the address of the allocated memory
	*/
	John2 := new(Person)
	John2.firstName = "John"
	John2.lastName = "Doe"
	John2.age = 30
	fmt.Println("Person : ",John2) // prints &{John Doe 30}
	fmt.Println("Person Name : ",John2.firstName) // prints John
	fmt.Println("Person Age: ",John2.age) // prints 30
	fmt.Println("Person : ",*John2) // prints {John Doe 30}
	
	// Working on nested structure
	var Thor Employee
	Thor.Employee_Details = Person {
		firstName: "Thor",
		lastName: "Odinson",
		age:       1000,
	}
	Thor.Employee_Contact.Email = "Thor.GodofThunder@gmail.com"
	Thor.Employee_Contact.Phone = "9043893482"
	Thor.Employee_Address = Address {
		House: 123,
		Area: "Asgard",
		State: "Universe",
	}
	fmt.Println("God: ",Thor) // {{Thor Odinson 1000} {Thor.GodofThunder@gmail.com 9043893482} {123 Asgard Universe}}
	fmt.Println("God contact:",Thor.Employee_Contact) // {Thor.GodofThunder@gmail.com 9043893482}
	fmt.Println("God Address:",Thor.Employee_Address) // {123 Asgard Universe}

}