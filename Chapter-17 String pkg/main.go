package main

import (
	"fmt"
	"strings"
)
func main() {
	fmt.Println("Learning string......")

	data := "apple,orange,banana" // string
	parts := strings.Split(data,",") // split string
	fmt.Println(parts) // [apple orange banana]

	str := "one two three four two two five" // string
	count:= strings.Count(str,"two") // count string
	fmt.Println("count: ",count) // count: 3

	str = "      Hello!GO...  " // string
	fmt.Println("Original String: ",str) // Original String:      Hello!GO...
	trimmed := strings.TrimSpace(str) // trim string
	fmt.Println("Trimmed String: ",trimmed) // Trimmed String: Hello!GO

	str1 := "Tony" // string
	str2 := "Stark" // string
	result := strings.Join([]string{str1,str2},"___&___") // join string
	fmt.Println("Result: ",result) // Result: Tony___&___Stark

	result1 := strings.Join([]string{str1,"Kumar",str2}, ", ,") // join string
	fmt.Println("Result1: ",result1) // Result1: Tony, ,Kumar, ,Stark
}