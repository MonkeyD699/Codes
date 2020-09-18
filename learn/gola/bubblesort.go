package main

import "fmt"

func main() {
	var numbers []int = []int{4, 7, 8, 1, 6, 9}
	fmt.Println("our list of numbers:", numbers)
	bubbleSort(numbers)
	fmt.Println("after sorting:", numbers)
}
func bubbleSort(numbers []int) {
	var N int = len(numbers)
	for i := 0; i < N; i++ {
		sweep(numbers)
	}
}
func sweep(numbers []int) {
	var N int = len(numbers)
	var firstIndex int = 0
	var secondIndex int = 1
	for secondIndex < N {
		var firstNumber int = numbers[firstIndex]
		var secondNumber int = numbers[secondIndex]
		if firstNumber > secondNumber {
			numbers[firstIndex] = secondNumber
			numbers[secondIndex] = firstNumber
		}
		firstIndex++
		secondIndex++
	}
}
