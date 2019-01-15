const infiniteString = (n, s) => {
    // arrange the string
    let c = 0, ca = 0;
    let r = n % s.length;
    
    console.log(r)
    // get 'a' main
    for(let i=0; i<s.length; i++) {
        if(s[i] == 'a')
            c++;
    }
    // get 'a' rest
    for(let i=0; i < r; i++) {
        if(s[i] == 'a'){ 
            ca++
        }
    }
    
    console.log(c * (n / s.length), ca)
    return 0;
}


var result = infiniteString(10, "aba")
console.log(result)