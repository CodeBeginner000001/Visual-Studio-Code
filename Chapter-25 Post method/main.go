/*
Post Request
*/
package main

import (
	"encoding/json"
	"fmt"
	"io"
	"net/http"
	"strings"
)

type Todo struct {
	UserId    int    `json:"userId"`
	Id        int    `json:"id"`
	Title     string `json:"title"`
	Completed bool   `json:"completed"`
}

func performGetRequest() {
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
func performPostRequest() {
	todo := Todo{
		UserId:    23,
		Title:     "Tony Stark",
		Completed: true,
	}
	// convert the Todo struct to JSON
	jsonData, err := json.Marshal(todo)
	if err != nil {
		fmt.Println("Error marshalling : ", err)
		return
	}
	// convert json data to string
	jsonString := string(jsonData)
	// convert string to io.reader that canbe passed to post request method
	jsonReader := strings.NewReader(jsonString)

	myUrl := "https://jsonplaceholder.typicode.com/todos"
	// send the post request
	res, err := http.Post(myUrl, "application/json", jsonReader)
	if err != nil {
		fmt.Println("Erro sending: ", err)
		return
	}
	// printing status
	fmt.Println("response status: ",res.Status)
	// closing the res.Body after use
	defer res.Body.Close()
	// decoding the res.Body to read the response
	data, err := io.ReadAll(res.Body)
	if err != nil { // if err
		fmt.Println("Error reading the stream of data : ", err) // print err
		return
	}
	fmt.Println("Response: ", string(data)) // print response
}
func main() {
	fmt.Println("Learning CRUD API .......")
	// performGetRequest()
	performPostRequest()
}
