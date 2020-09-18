package main

import "fmt"

func main() {
	var name string
	var lint string
	fmt.Printf("enter the name\n")
	fmt.Scanln(&name)
	k := len(name) - 1
	for i := k; i >= 0; i-- {
		lint = lint + string(name[i])
	}

	fmt.Println(lint)
	if name == lint {
		fmt.Println("palindrome")
	} else {
		fmt.Println("not a palindrome")
	}
}
