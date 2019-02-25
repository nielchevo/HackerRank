
function twoCharacter(s) {
  // Remove duplicates char to get pattern
  let pattern = "";
  for(let i=0; i < s.length; i++) {
    if(pattern.indexOf(s[i]) == -1) {
      pattern += s[i];
    }
  }
  let max = 0;
  for(let itr=0; itr < pattern.length; itr++) {
    for(let itr2=(itr+1); itr2 < pattern.length; itr2++) {
      let a=' ';
      let counter= 0;

      // iterate trought input string
      for(let i in s) {
        //console.log("%s :: [%s, %s] ", s[i], pattern[itr], pattern[itr2]);
        if( s[i] == pattern[itr] || s[i] == pattern[itr2]) {
          //console.log("a: %s | s[i]: %s", a, s[i]);
          if(a == ' ') {
            a = s[i];
            counter++;
          } else {
            if(s[i] != a) {
              counter++;
              a = s[i];
            } else {
              counter = 0; 
              break;
            }
          }
          //console.log("counter ",counter);
        }
      }

      // record longest pattern
      if( max < counter ) {
        max = counter;
      }
    }
  }
    
  return max;
}

var input = 'beabeefeab';
var result = twoCharacter(input);
console.log(result);

