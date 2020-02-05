package sorting

// InsertionSort implementation
type InsertionSort struct {
	result []int32
}

func (c *InsertionSort) insertionSort1(n int32, arr []int32) {

}

//UnitTestInsertion test unit
func UnitTestInsertion() {

	var x InsertionSort
	mInput := []int32{4, 5, 2, 3, 6, 5}
	size := len(mInput)
	x.insertionSort1(int32(size), mInput)

}
