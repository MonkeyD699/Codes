package main

import "fmt"

var numbers []int

var swap int

func main() {
	for i := 0; i < 5; i++ {
		fmt.Printf("enter the numbers:")
		fmt.Scanf("%v\n", &numbers[i])
		sortNum(numbers)
		fmt.Println("After sorting:", numbers)
	}
}
func sortNum(arr []int) {
election:
	for k := 0; k < 4; k++ {
		if arr[k+1] < arr[k] {
			swap = swap + 1
			var temp int
			temp = numbers[k+1]
			arr[k+1] = arr[k]
			arr[k] = temp
		}
	}

	if swap != 0 {
		goto election
	}

}
