/*
	Big Sorting solution with Go (insertion sort)
	https://www.hackerrank.com/challenges/big-sorting/problem

	TIME OUT in Test case 6 & 7
*/
package sorting

import "fmt"

func printArr(arr []string) {
	for i := 0; i < len(arr); i++ {
		fmt.Print(arr[i], " ")
	}
	fmt.Print("\n")
}

func checkStringAsc(s1 string, s2 string) bool {

	if len(s1) > len(s2) || len(s1) == len(s2) && s1 > s2 {
		return true
	}

	return false
}

func bigSorting(arr []string) []string {

	// Insertion Sort
	for i := 1; i < len(arr); i++ {
		fmt.Println("i: ", i)
		key := arr[i]

		for j := 0; j < i; j++ {

			if checkStringAsc(arr[j], key) {
				//swap thing
				key = arr[j]
				arr[j] = arr[i]
				arr[i] = key

				// utilities for checking
				//printArr(arr)
			}
		}
	}

	return arr
}

func UnitTestBigSorting() {

	input := []string{"31415926535897932384626433832795", "2", "1", "21", "22", "8"}

	input = bigSorting(input)

	printArr(input)
}
