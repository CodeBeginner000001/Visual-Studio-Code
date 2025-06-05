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
}


