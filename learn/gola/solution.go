package main

import "fmt"

//check whether two strings are permutation
func main() {
	var count int
	var name string
	var name1 string
	fmt.Println("enter the string")
	fmt.Scanln(&name)
	fmt.Println("enter the second string")
	fmt.Scanln(&name1)
	k := len(name) - 1
	m := len(name1) - 1
	if k == m {
		for i := k; i >= 0; i-- {

			for l := m; l >= 0; l-- {

				if name[i] == name1[l] {
					count = count + 1
					break
				} else {
					continue
				}
			}
		}
		if count >= len(name) {
			fmt.Println("permutation string")
		} else {
			fmt.Println("non-permutation string")
		}
	} else {
		fmt.Println("invalid string")
	}
}
