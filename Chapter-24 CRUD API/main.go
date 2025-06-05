package main

import (
	"encoding/json"
	"fmt"
	"io"
	"net/http"
)

type Todo struct {
	UserId    int    `json:"userId"`
	Id        int    `json:"id"`
	Title     string `json:"title"`
	Completed bool   `json:"completed"`
}

func main() {
	fmt.Println("Learning CRUD API .......")
	res, err := http.Get("https://jsonplaceholder.typicode.com/todos/1") // return reponse and way to make a request to get the response
	if err != nil {                                                      // if not nil
		fmt.Println("Error getting GET response ", err) // print err message
		return
	}
	// defer res.Body.Close()                    // close the request.Body stream in the end after use to lift the system usage space
	fmt.Printf("Type of response: %T\n", res) // print the type of the response which is *https.response
	fmt.Println("Web response: ", res.Body)   // Output: Stream of bytes

	if res.StatusCode != http.StatusOK { // if response satatus doesn't match
		fmt.Println("Error in getting Response: ", res.Status) // print statusCode
		return
	}
	/* direct way to add the json data to the object variable */
	// var todo Todo // object variable
	// err = json.NewDecoder(res.Body).Decode(&todo) // read the stream of bytes and decode them and store them into Todo variable
	// if err != nil { // if err
	// 	fmt.Println("Error decoding: ", err) // print err
	// 	return
	// }
	// fmt.Println("Todo: ", todo) // print todo

	/* Long way to get the same output as above */
	data, err := io.ReadAll(res.Body) // read the stream of bytes and return the data and err and data is the buffer(body) of bytes
	if err != nil {                   // if err
		fmt.Println("Error in reading the response: ", err) // print err message
		return
	}
	var Todo1 Todo                     // new object variable
	err = json.Unmarshal(data, &Todo1) // decoding the json data and storing them into Todo1 variable
	if err != nil {                    // if err
		fmt.Println("Error decoding message: ", err) // print err
	}
	fmt.Println("Decoded and stored object in Todo1 variable: ", Todo1) // print Todo1
}
