const jumpingCloud = (input) => {
   let i=0;
   let jump=0;

   for(i=0; i<input.length; i++) {
      if(input[i+2] < 1) {
         jump++; 
         i=i+1;
         continue;
      }
      if(input[i+1] < 1) {
         jump++;
         continue;
      }
   }
   return jump;
} 

var result = jumpingCloud([0, 0, 1, 0, 0, 0, 0, 1, 0, 0])
// 10 | 0 0 1 0 0 0 0 1 0 0
console.log(result)