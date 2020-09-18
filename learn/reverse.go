package main

import "fmt"

type number struct {
	value int
	next  *number
}

type list struct {
	length int
	start  *number
}

func (l *list) append(n *number) {
	if l.length == 0 {
		l.start = n
	} else {
		newNumber := l.start
		for newNumber.next != nil {
			newNumber = newNumber.next
		}
		newNumber.next = n
	}
	l.length++
}
func main() {
	l := &list{}
	n1 := number{
		value: 5,
	}
	n2 := number{
		value: 4,
	}
	n3 := number{
		value: 8,
	}
	l.append(&n1)
	l.append(&n2)
	l.append(&n3)
	fmt.Println(n1, n2, n3)
}
