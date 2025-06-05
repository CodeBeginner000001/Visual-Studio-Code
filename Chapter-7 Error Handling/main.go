package main

import "fmt"

func divide(a, b float64) (float64, error) {
	if b == 0 {
		return 0, fmt.Errorf("denominator should be more than zero")
	}
	return a / b, nil
}

func main() {
	fmt.Println("Learning Error Handling...................")
	/*
	" _ " is only used when a function is returning two parameter but you want only one so _ acts as a blank indentifier
	whose role is set as write only
	*/
	ans, _ := divide(10,2)
	fmt.Println("Division of two number is ",ans)
	/*
	handle error or the second parameter that is being passed by function
	*/
	ans1,err:= divide(10,0)
	if err != nil {
		fmt.Println(err)
	} else {
	fmt.Println("Division of two number is ",ans1)
}
}