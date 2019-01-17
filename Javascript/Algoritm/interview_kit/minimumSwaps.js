const minimumSwaps = (arr) => {
    let count = 0;

    for(let i=Number.parseInt(arr.length/2); i< arr.length; i++){
        console.log("arr[%d] = %d ",i, arr[i])
        for(let j=0; j < i; j++) {
            if(arr[j] > arr[i]) {
                console.log("arr[%d]: %d > arr[%d]: %d ", j, arr[j], i, arr[i])
                let temp = arr[i]
                arr[i] = arr[j]
                arr[j] = temp
                count += 1
            }
        }
    }
    console.log(arr)
    return count;
}

//var arr = [2, 3, 4, 1, 5]
//var arr =[1, 3, 5, 2, 4, 6, 7]
var arr = [3, 7, 6, 9, 1, 8, 10, 4, 2, 5]
            
var result = minimumSwaps(arr);
console.log(result)