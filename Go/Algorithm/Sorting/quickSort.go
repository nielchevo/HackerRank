/*
	https://www.hackerrank.com/challenges/quicksort1/problem
*/

package main

import (
	"fmt"
)

func printArr(arr []int) {
	for _, x := range arr {
		fmt.Print(x, " ")
	}
}

func quickSort(arr []int) []int {

	// use first array as key.
	key := arr[0]
	pivot := 0

	for i := 0; i < len(arr); i++ {
		fmt.Print("\n")
		if key > arr[i] {
			pivot++

			for j := i; j > 0; j-- {
				// swap
				arr[j], arr[j-1] = arr[j-1], arr[j]
			}
		}
		printArr(arr)
	}

	return arr
}

func main() {

	input := []int{4, 5, 3, 7, 2}

	quickSort(input)
}
