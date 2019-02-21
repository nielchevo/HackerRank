
function pangrams(s) {
  // generate alpabeth map
  var charmap = new Map(); 
  
  for(let i=0; i < 26; i++) {
    charmap.set(i+97, false);
  }

  for(let i=0; i< s.length; i++) {       
    // convert char to ASCII 
    let asciiNum = s[i].toLowerCase().charCodeAt();

    if(asciiNum >= 97 && asciiNum <= 122){
      if(charmap.get(asciiNum) == 0) {
        charmap.set(asciiNum, 1);
      }
    }
  }

  //panagram check
  let isPanagram = true;
  for(let i=0; i < charmap.size; i++) {
    if(charmap.get(i+97) == false) {
      isPanagram = false;
    }
  }

  return (isPanagram) ? "pangram": "not pangram";
}


var result = pangrams("We promptly judged antique ivory buckles for the next prize");
console.log(result);
