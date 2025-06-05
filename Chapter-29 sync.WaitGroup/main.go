/*
-> sync.WaitGroup is a synchronization primitive in GO that is used to wait for a colleciton of goroutines

	to finish their execution. It allows you to coordinate the execution of multiple go routine and ensure completion of
	each go routine.
*/
package main

import (
	"fmt"
	"sync"
)

func worker(i int, wg *sync.WaitGroup) {
	defer wg.Done() // signal that goroutine is done
	fmt.Printf("Worker %d started\n", i)
	// some task
	fmt.Printf("Worker %d ended\n", i)
}
func main() {
	fmt.Println("Learning Goroutine sync.WaitGroup.........")

	var wg sync.WaitGroup

	for i := 1; i <= 3; i++ {
		wg.Add(1) // increment the wait Group counter
		go worker(i,&wg)
	}
	wg.Wait() // wait for all workers to finish
	fmt.Println("Worker task completed....")
}
