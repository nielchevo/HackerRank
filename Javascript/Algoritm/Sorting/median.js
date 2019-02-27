
/* JS version of recusive quicksort 
https://stackoverflow.com/questions/5185864/javascript-quicksort

 ex.
[ 10, 80, 30, 90, 40, 50, 70 ]
pivot:  70
left:  [ 10 ]
right:  [ 80 ]
left:  [ 10, 30 ]
right:  [ 80, 90 ]
left:  [ 10, 30, 40 ]
left:  [ 10, 30, 40, 50 ]
// from here do quicksort(left)
pivot:  50
left:  [ 10 ]
left:  [ 10, 30 ]
left:  [ 10, 30, 40 ]
pivot:  40
left:  [ 10 ]
left:  [ 10, 30 ]
pivot:  30
left:  [ 10 ]
// from here start to quickSort(right)
pivot:  90
left:  [ 80 ]

[ 10, 30, 40, 50, 70, 80, 90 ]
*/

function quickSort(arr) {
    if(arr.length <=1 )
        return arr;

    // Use the last element of array as Key
    var pivot = arr[arr.length-1];
   
    var left=[];
    var right=[];

    for(var i= 0; i < arr.length-1; i++) {
        if(arr[i] < pivot) {
            left.push(arr[i])
        } else {
            right.push(arr[i]);
        }
    }

    return quickSort(left).concat(pivot, quickSort(right));
};

function findMedian(arr) {

    // Find with quick sort
    let sorted = quickSort(arr);
    
    // return value of median array[i] 
    return sorted[Math.floor(sorted.length/2)];
}

var input = "0 1 2 4 6 5 3".split(" ").map(x => Number(x));
console.log(input);
var result = findMedian(input);
console.log(result);