/*
encoding/json :- It is used to encode and decode the json data. JSON is the light weight data interchange format that is easy for human
to read and write and easy for machine to parse and generate.

Marshalling :- Use json.Marshal to convert a Go struct into JSON-encoded byte array.
Unmarshalling(Decoding) :- Use json.Unmarshal to convert a JSON-encoded byte array into a Go struct
*/

package main

import (
	"encoding/json"
	"fmt"
)

type Person struct { // Structure that is mapped with the json key
	Name    string `json:"name"`
	Age     int    `json:"age"`
	IsAdult bool   `json:"is_adult"`
}

func main() {
	fmt.Println("Learning Json.......")
	person := Person{Name: "Tony Stark", Age: 34, IsAdult: true} // creating the object
	fmt.Println("person Data is : ",person) // print the object

	// convert person into JSON Encoding (Marshalling)
	jsonData,err := json.Marshal(person) // encocde the object
	if err != nil { // if err
		fmt.Println("Error in converting into Json: ",err) // print err
		return
	}
	fmt.Println("Json Data : ",string(jsonData)) // print the bytes of information by converting into string

	// converting the Json Encoding into person (decoding unmarshalling)
	var personData Person // creating a variable with the blueprint of Person
	err = json.Unmarshal(jsonData,&personData) // decoding the json data and storing into personData variable by reference
	if err != nil { // if err
		fmt.Println("Error in decoding: ",err) // print err
		return
	}
	fmt.Println("Decoded data that after unmarshalling: ",personData) // decoded json data
}
