const marsExploration = (text) => {
   let pattern = 'SOS';
   let count = 0;

   for(var i=0; i < text.length; i++) {
      if( text[i] != pattern[i % 3])
         count++
   } 
   return count;
}

marsExploration("SOSSPSSQSSOR");