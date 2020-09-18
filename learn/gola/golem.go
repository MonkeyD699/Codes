package main

import "fmt"

//creating a linked list

type post struct {
	body        string
	publishDate int64
	next        *post
}
type feed struct {
	length int
	start  *post
}

func (f *feed) append(newPost *post) {
	if f.length == 0 {
		f.start = newPost
	} else 
		currentPost := f.start
		for currentPost.next != nil {
			currentPost = currentPost.next
		}
		currentPost.next = newPost
	
	f.length++
}
func main() {
	f := &feed{}
	p1 := post{
		body: "lorem ipsum",
	}
	f.append(&p1)
	fmt.Printf("length: %v\n", f.length)
	fmt.Printf("First:%v\n", f.start)
	p2 := post{
		body: "Dolor sit amet",
	}
	f.append(&p2)
	fmt.Printf("Length:%v\n", f.length)
	fmt.Printf("first:%v\n", f.start)
	fmt.Printf("second:%v\n", f.start.next)
}
