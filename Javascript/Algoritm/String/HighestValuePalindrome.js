
function highestValuePalindrome(maxN, maxChangeAllow, number) {
   
   let highest = 0;
   
   // Convert to string array for ease (optional)
   let arr = Array.from(number.toString());

   // First loop to make array of string palindrome.
   for(let i=((maxN/2)-1); i>=0; i--) {
      if(arr[i] !== arr[(maxN-1)-i]) {
         // if do not have remaining change print -1
         if (maxChangeAllow < 0) return;

         arr[i] >= arr[(maxN-1)-i] ? arr[(maxN-1)-i] = arr[i] : arr[i] = arr[(maxN-1)-i]
         maxChangeAllow--;
      } 
      
      // Save the highest value
      if(arr[i] >= highest) highest=arr[i]
   }

   // Second Loop to check remaining change flag 
   do {
      for(let i=0; i <=maxN/2; i++) {
         if(arr[i] <= highest) {
            // Attempt to highest value from array population
            arr[i] = highest; arr[(maxN-1)-i] = highest;

            // Since we change both side, changeFlax should be decrease by 2
            maxChangeAllow -=2;
         }
      }
   } while (maxChangeAllow >= 0)

   console.log(arr)
}

highestValuePalindrome(6, 3, "092282")
