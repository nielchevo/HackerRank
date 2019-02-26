function getTotalX(a, b) {
   let validCount = 0;

   for (let x = 1; x <= 100; x++) {
       if (a.every(int => (x % int == 0))) {
           if (b.every(int => (int % x == 0))) {
               validCount++;
           }
       }
   }

   return validCount;
}
var input1 = [2, 4];
var input2 = [16, 32, 96];
var result = getTotalX(input1, input2);
console.log(result);
