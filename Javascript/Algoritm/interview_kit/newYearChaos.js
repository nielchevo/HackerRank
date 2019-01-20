
const newYearChaos = (arr) =>{ 
    let count = 0; let isChaotic = false;

    for(let i=arr.length -1; i >=0; i--) {
        if(arr[i] - (i+1) > 2) {
            isChaotic = true;
            break;
        } 

        //bubble sort 
        // avoid time out in Hackerrank ues 'j = Math.max(0, arr[i] - 2)'
        for(let j = 0; j < i; j++) {
            if(arr[j] > arr[i]) {
                console.log(arr[j], arr[i])
                count++
            }
        }
    }

    if(isChaotic) {
        console.log('Too Chaotic')
    } else {
        console.log(count)
    }
}

var arr = [1, 2, 5, 3, 7, 8, 6, 4]
//var arr = [2, 1, 5, 3, 4]
//var arr = [2, 5, 1, 3, 4] // chaotic sample

var result = newYearChaos(arr)
console.log(result)