package main

import (
	"fmt"
)

func main() {
	x := 21
	if x > 5 {
		fmt.Println("x is greater than 5")
	} else {
		fmt.Println("x is less than or equal to 5")
	}

	z := 10
	if z > 10 {
		fmt.Println("z is greater than 10")
	} else if z > 5 {
		fmt.Println("z is greater than 5 but smaller than 10")
	} else {
		fmt.Println("z is less than or equal to 5")
	}

	y := 10
	if x > 5 && (y > 5 || z < 43) {
		fmt.Println(("Hey, How are you"))
	} else {
		fmt.Println("Learn programming with hello World ")
	}
}
