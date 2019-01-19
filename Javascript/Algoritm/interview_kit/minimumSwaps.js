
const minimumSwaps = (arr) => {
    let count = 0, i = 0;
    do {
        if(arr[i] == i+1) {
            //console.log('%darr[%d] + 1 == %d', arr[i], i+1)
            i++;
        }
        else{
            // swap
            let temp = arr[i]
            arr[i] = arr[temp - 1]
            arr[temp - 1] = temp
            
            count++;

            // console.log(arr[i], arr[temp - 1])
            // console.log('array now: ', arr)
        }
    } while (i < arr.length)

    return count
}
var arr = [2, 3, 4, 1, 5]
//var arr =[1, 3, 5, 2, 4, 6, 7]
//var arr = [3, 7, 6, 9, 1, 8, 10, 4, 2, 5]
            
var result = minimumSwaps(arr);
console.log("resutls :", result)