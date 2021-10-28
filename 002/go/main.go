package main

import "fmt"

func main() {
	temp := 0
	last := 1
	current := 2
	answer := 2

	for {
		temp = last + current
		last = current
		current = temp
		if current%2 == 0 {
			answer += current
		}
		if temp >= 4000000 {
			break
		}
	}

	fmt.Printf("The answer is: %d\n", answer)
}
