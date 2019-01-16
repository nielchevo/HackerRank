const rotateArray = (arr, x) => {
    let temp = [];
    temp = arr.splice(0, x)
    return Array.prototype.concat(arr, temp);
}

var inputs= [1, 2, 3, 4, 5]
var result = rotateArray(inputs, 4)
console.log(result)