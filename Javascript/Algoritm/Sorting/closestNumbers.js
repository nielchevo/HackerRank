function closestNumbers(arr) {
    // sort
    let distance = 0;
    for(let i=0; i<arr.length; i++) {
       for(let j=i+1; j < arr.length; j++) {
          if(arr[i] > arr[j]) {
             let a = arr[i];
             arr[i] = arr[j];
             arr[j] = a;
          }
       }
    }
    
    console.log("distance ", distance);
 
 }
 
 var input =[-20, -30, 40, 30, 11, -1, 6 ];
 console.log(closestNumbers(input));