package main

import "fmt"

func main() {
	answer := 0

	for n := 0; n < 1000; n++ {
		if n%3 == 0 || n%5 == 0 {
			answer += n
		}
	}
	fmt.Printf("The answer is: %d\n", answer)
}
