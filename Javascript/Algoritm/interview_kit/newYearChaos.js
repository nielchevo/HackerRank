
const newYearChaos = (arr) =>{ 
    let count =0;
    for(let i=arr.length -1; i >=0; i--) {
        if(arr[i] - (i+1) > 2) {
            console.log('too chaotic')
            break;
        } 

        // exp:. math.max is for determine if arr[i] - 2 is minus
        for(let j = Math.max(0, (arr[i] - 2)); j < i; j++) {
            if(arr[j] > arr[i]) {
                //console.log(arr[j], arr[i])
                count++
            }
        }    
    }
    return count
}

var arr = [2, 1, 5, 3, 4]
//var arr = [2, 5, 1, 3, 4]
var result = newYearChaos(arr)
console.log(result)