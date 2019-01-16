
const hourGlass = (arr) => {

    var maxSum = 0;
    for (let i = 0; i < 4; i++) {
        for (let j = 0; j < 4; j++) {
            let sum = 0;
            // Get middle value of the hourglass
            sum += arr[i + 1][j + 1]
            
            for (let k = 0; k < 3; k++) {
                //first row
                sum += arr[i][j + k]

                //last row
                sum += arr[i + 2][j + k]
            }

            if (sum >= maxSum)
                maxSum = sum
        }
    }
    return maxSum
}

var x = [[ 1, 1, 1, 0, 0, 0 ],
         [ 0, 1, 0, 0, 0, 0 ],
         [ 1, 1, 1, 0, 0, 0 ],
         [ 0, 0, 2, 4, 4, 0 ],
         [ 0, 0, 0, 2, 0, 0 ],
         [ 0, 0, 1, 2, 4, 0 ] ]

var result = hourGlass(x);
console.log(result)