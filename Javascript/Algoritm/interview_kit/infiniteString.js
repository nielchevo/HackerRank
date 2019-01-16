const infiniteString = (s, n) => {
    // Arrange the string
    let c = 0, ca = 0;
    let r = n % s.length;
    
    // calculate in 'a' the main
    for(let i=0; i<s.length; i++) {
        if(s[i] == 'a')
            c++;
    }

    // calculate 'a' the rest
    for(let i=0; i < r; i++) {
        if(s[i] == 'a'){ 
            ca++
        }
    }
    
    // sum 1 line of 'a' then multiplied by the string line minus rest
    let multipliedStr = c * Math.floor(n / s.length);
    //console.log(multipliedStr, ca, c, (n/ s.length))
    
    return multipliedStr + ca;
}

// test case 11 & example 
//var result = infiniteString(10, "aba")
var result = infiniteString("epsxyyflvrrrxzvnoenvpegvuonodjoxfwdmcvwctmekpsnamchznsoxaklzjgrqruyzavshfbmuhdwwmpbkwcuomqhiyvuztwvq", 549382313570)
console.log(result)