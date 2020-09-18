package main

import "fmt"

func main() {
	var name string
	var key byte
	var sum byte
	for i := 0; i < 5; i++ {
		fmt.Println("enter your name:")
		fmt.Scanln(&name)
		for j := 0; j < len(name); j++ {
			key = name[j]
			sum = key + sum
		}
		var index byte
		index = sum % 10
		fmt.Println(index)

	}

}
