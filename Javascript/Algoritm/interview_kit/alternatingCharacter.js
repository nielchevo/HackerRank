const alternatingString = (s) => {
    let count = 0

    for(let i=1; i<=s.length;i++ ){
        if(s[i] == s[i-1])
            count +=1
    }
    return count;
}

//var input = 'AAAAA'
var input = 'AABABB'
var results = alternatingString(input)
console.log(results)