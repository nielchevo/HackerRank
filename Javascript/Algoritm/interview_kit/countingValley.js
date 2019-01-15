const countingValleys = (input, string) => {

    var count=0; var level=0;
    for(let i=0; i<string.length; i++) {
        if(string[i] === 'U') {
            level +=1; 
            if(level == 0) 
             count +=1;
        }
        else
            level -=1;
    }
    return count;
}

var arr = "UDDDUDUU"
var test = countingValleys(8, arr)
console.log(test)