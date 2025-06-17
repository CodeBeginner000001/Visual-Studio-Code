package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	fmt.Println("Hey, Please mention your name below")
	// var name string
	// fmt.Scan(&name) // reads only till first white space
	// fmt.Println("Hello, Mr. ", name)

	// reading a full string
	reader := bufio.NewReader(os.Stdin)
	fullname, _ := reader.ReadString('\n')
	fmt.Println("Hello, Mr.", fullname)

	var a int
	fmt.Println("Type a number")
	fmt.Scan(&a) // reads only till first white space
	fmt.Println("Your number is : ", a)

	var b, c int
	fmt.Println("Type a two number")
	fmt.Scan(&b, &c) // reads only till first white space
	fmt.Println("Your numbers are : ", b, " and ", c)

	var i, j string
	fmt.Print("Type two string: ")
	fmt.Scanln(&i, &j) // it stops scanning for inputs at a newline (at the press of the Enter key).
	fmt.Println("Your strings are:", i, "and", j)

	var d, f int
	fmt.Print("Type two numbers: ")
	fmt.Scanf("%v\n%v", &d, &f) // recieve values in separated lines
	fmt.Println("Your numbers are:", d, "and", f)
}
