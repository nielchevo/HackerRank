
function countingSort(arr) {
    let sortMap = new Array(100).fill(0);

    for(let i in arr) {
        sortMap[[arr[i]]] += 1;
    }

    let result = new Array()
    //print
    for(let i in sortMap) {
        for(let j=0; j<sortMap[i]; j++) {
            result.push(i);
        }
    }
    return result;
}

var input = [19, 10, 12, 10, 24, 25, 22];
countingSort(input);