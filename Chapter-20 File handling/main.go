/*
File operation involves os and io/ioutil packages

io.WriteString() - a convenient way to write a string to a file
os.Open() - attempt to open file
make([]byte,1024) - create a byte slice(buffer) with a capacity of 1024 byte. This buffer will be used to read chunks of file.
file.Read(buffer) - read content of the file to buffer
*/
package main

import (
	"fmt"
	"io"
	"os"
	"io/ioutil"
)
func main() {
	fmt.Println("Learning File Handling......") // Print a message to the console

	// write a file
	file,err := os.Create("example.txt") // Create a new file
	if err != nil { // Check if there was an error
		fmt.Println("Error creating file: ",err) // Print the error message
		return // Exit the function
	}
	defer file.Close() // Close the file when we're done with it
	content := "Hello, This is a new File and editting it." // Define the content of the file
	byte1 , error := io.WriteString(file,content+"\n"+"this is new line") // Write the content to the file
	fmt.Println("Byte written: ",byte1) // Print the number of bytes written
	if error != nil { // Check if there was an error
		fmt.Println("Error writing to file: ",err) // Print the error message
		return // Exit the function
	} 
	fmt.Println("File created and written successfully") // Print a success message



	// Read a file
	file,error1 := os.Open("example.txt") // Open the file
	fmt.Println("Reading File........")
	if error1 != nil { // Check if there was an error
		fmt.Println("Error opening file: ",error1) // Print the error message
		return // Exit the function
	}
	defer file.Close()
	/* Buffer - It is a kind of temporary storage that holds the data for some time */
	buffer := make([]byte,1024) // create a byte slice(buffer) with a capacity of 1024 byte.
	for {
		n ,error2 := file.Read(buffer) // read content of the file to buffer
		if error2 == io.EOF{ // if reached end of the file break the loop
			break
		}
		if error2 != nil { // if error
			fmt.Println("Error while reading file",error2) // print error
			return
		}
		fmt.Println(string(buffer[:n])) // convert the buffer of size n to string and print it
	}

   // Read the entire file into a byte slice
   fmt.Println("ShortCut method of reading a file........")
   contents,error3 := os.ReadFile("example.txt")
   if error3 != nil {
	fmt.Println("Error while reading file ",err)
	return 
   }
   fmt.Println(string(contents))

   // Old way to read the file at once
   fmt.Println("ShortCut method of reading a file........")
   contents,error4 := ioutil.ReadFile("example.txt")
   if error4 != nil {
	fmt.Println("Error while reading file ",err)
	return 
   }
   fmt.Println(string(contents))
}