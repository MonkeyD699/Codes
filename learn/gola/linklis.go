package main

import "fmt"

//two sums leetcode
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
		value: 2,
	}
	n2 := number{
		value: 4,
	}
	n3 := number{
		value: 3,
	}
	l.append(&n1)
	l.append(&n2)
	l.append(&n3)
	fmt.Println(l.start, l.start.next, l.start.next.next)
}
