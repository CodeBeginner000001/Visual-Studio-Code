package main 

/*
Maps

-> A map is a collection of key-value pairs.
-> It is a data structure that stores data in the form of key-value pairs.
-> Where each key is unquie
-> it is an unordered collection of key-value pairs
-> it retrieve the data in unordered form and allows for efficient retrieval of values based on those keys.
*/

import (
	"fmt"
)
func main() {
	fmt.Println("Learning Maps.........")
	// name <--> grade
	studentGrades := make(map[string]int)
	studentGrades["John"] = 90
	studentGrades["Mary"] = 80
	studentGrades["David"] = 70
	studentGrades["Peter"] = 60
	fmt.Println("Marks of David : ",studentGrades["David"]) // accessing the value in the map
	studentGrades["David"] = 100
	fmt.Println("Next Marks of David : ",studentGrades["David"]) // accessing the value in the map
	// delete the key from the map
	delete(studentGrades,"Peter")
	fmt.Println("After deleting Peter from the map : ",studentGrades) 
	fmt.Println("After deleting Peter from the map : ",studentGrades["Peter"]) // accessing the value in the map
	// Checking if a key exists
	grades,ok := studentGrades["John"]
	fmt.Println("Grade of John : ",grades)
	fmt.Println("Key exists : ",ok)

	Grades,check := studentGrades["Peter"]
	fmt.Println("Grade of Peter : ",Grades)
	fmt.Println("Key exists : ",check)

	// looping on map
	for key, value := range studentGrades {
		fmt.Println("Key : ",key," Value : ",value)
	}

	person := map[string]int{
		"Alice": 90,
		"Bob":   80,
		"Charlie": 70,
	}
	for index,value := range person {
		fmt.Println("Key : ",index," Value : ",value)
	}
}