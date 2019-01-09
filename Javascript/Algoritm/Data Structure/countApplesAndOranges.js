function countApplesAndOrange(minX, maxY, treeA, treeB, apples, oranges) {
   let countA = 0; let countB = 0;
   
   apples.map(val => {
       val = treeA + val;
       if (val >= minX && val <= maxY) {
           return countA++
       }
   })

   oranges.map(val => {
       val = treeB + val;
       if (val >= minX && val <= maxY) {
           return countB++
       }
   })

   // print answer 
   console.log(countA)
   console.log(countB)
}

countApplesAndOrange(7, 11, 5, 15, [-2, 2, 1], [5, -6])