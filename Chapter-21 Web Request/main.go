/*
Web Request - it refers to http request that is made to web server. These request are used to retrieve and or send data over
the internet, typically to interact with web applications or API's

-> Go make the web request through nte/http pkg which provides functions to create and send the http requests as well as handle response.

-> defer response.Body.Close() statement is used to ensure the response body is closed after you have finished reading from it.
   In Go it important to close the resources like network connections and file handles to free up system resource.

-> Resource Management :- HTTP response in GO are represented by http.response onjects, which have a Body field containing the response body
   This Body is the stream of data from the server,and it's important to close this stream once you're done reading from it.

-> io.ReadAll(response.Body) :- it reads the entire response body into byte slice (body). it reads until EOF is reached and 
   returns the data read and error.

-> string(body) :- This converts the bytes slice body into string that can be read and printed into console.
*/
package main

import (
	"fmt"
	"io"
	"net/http"
)

func main() {
	fmt.Println("Learning web request.....")
	res, err := http.Get("https://jsonplaceholder.typicode.com/todos/1") // return reponse and way to make a request to get the response
	if err != nil { // if not nil
		fmt.Println("Error getting GET response ", err) // print err message
		return
	}
	defer res.Body.Close() // close the request.Body stream in the end after use to lift the system usage space
	fmt.Printf("Type of response: %T\n", res) // print the type of the response which is *https.response
	fmt.Println("Web response: ", res.Body) // Output: Stream of bytes

	data, err := io.ReadAll(res.Body) // read the stream of bytes and return the data and err and data is the buffer(body) of bytes
	if err != nil { // if err
		fmt.Println("Error in reading the response: ", err) // print err message
		return
	}
	fmt.Println("The data that is read from the response: ", data) // print the buffer data that is byte
	fmt.Println("The data is : ", string(data)) // convert the bytes to string
}
