const sockMerchant = (input, arr) => {
    var pair=0;
    
    arr.sort();
    
    for(let i=0; i<arr.length; i++) {
        if(arr[i] == arr[i+1]) {
            i++;
            pair++;
        }
    }

    return pair;
}

const arrInput = [10, 20, 20, 10, 10, 30, 50, 10, 20]
var test = sockMerchant(9, arrInput)
console.log(test)