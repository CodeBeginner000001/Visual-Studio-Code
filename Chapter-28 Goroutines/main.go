/*
-> concurrency :- 
* when two or more control flows of execution share one or more CPUs.
* In this case, the cpu scheduler is responsible for deciding when each thread gets to execute and on which CPU.
* For example: - if we have one cpu, but two or more threads share the cpu, then its considered concurrent execution.

-> Parallelism :-
* Is a subset of concurrency
* Its when two or more threads execute at the same real time on two or more CPUs.
* For example: - if three threads executing on three different CPUs simultaneously.

we use goroutines to execute them concurrently. This can greatly improve the performance of your program, especially dealing 
with I/O operations

Goroutines are key feature of the Go programming language that allows you to run functions concurrently or in parallel, with
other parts of the program.
*/
package main

import (
	"fmt"
	"time"
)

func sayHi() {
	fmt.Println("Hi, Tony")
	time.Sleep(2000 * time.Millisecond)
	fmt.Println("Say Hi ended")
}
func sayHello() {
	fmt.Println("Hello! World")
	time.Sleep(3000*time.Millisecond)
	fmt.Println("Say Hello function ended")
}
func main() {
	fmt.Println("Learning Goroutine.......")
	go sayHello()
	go sayHi()
	time.Sleep(2000*time.Millisecond)
}