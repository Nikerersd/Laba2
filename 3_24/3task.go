package main

import (
	"fmt"
)

func EvenDigits(number int) int {
	count := 0
	for number > 0 {
		digit := number % 10
		if digit%2 == 0 {
			count++
		}
		number /= 10
	}
	return count
}

func main() {
	var n int
	fmt.Print("Enter the number of numbers: ")
	fmt.Scan(&n)
	fmt.Print("Enter the numbers separated by a space: ")
	for i := 0; i < n; i++ {
		var number int
		fmt.Scan(&number)
		fmt.Print(EvenDigits(number))
		if i < n-1 {
			fmt.Print(" ")
		}
	}
	fmt.Println()
}