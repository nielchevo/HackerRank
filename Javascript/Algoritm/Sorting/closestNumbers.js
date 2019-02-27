function closestNumbers(arr) {
   
   let diff = Math.abs(arr[0] - arr[1]);
   // sort first
   for ( let i=0; i < arr.length; i++) {
      for ( let j=i+1; j < arr.length; j++) {
         
         if(Math.abs(arr[i] - arr[j]) < diff)
            diff = Math.abs(arr[i] - arr[j]);
         
         // swap
         if(arr[j] < arr[i]) { 
            let a = arr[j];
            arr[j] = arr[i];
            arr[i] = a;
         }
      }
   }

   // Filter out with nearest distance
   let result = [];
   for(let i=1; i < arr.length; i++) {
      if(Math.abs(arr[i-1] - arr[i]) == diff) {
         result.push(arr[i-1], arr[i]);
      }
   }

   return result;
}

var input2= "-20 -3916237 -357920 -3620601 7374819 -7330761 30 6246457 -6461594 266854 -520 -470".split(" ").map( e => Number(e));
var input =[-20, -30, 40, 30, 11, -1, 6 ];

console.log(closestNumbers(input2));