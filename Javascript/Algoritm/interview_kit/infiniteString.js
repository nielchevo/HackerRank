const repeatedString = (s, n) => {
    // Arrange the string
    let c = 0, ca = 0;
    let r = n % s.length;

    // calculate in 'a' the main
    for (let i = 0; i < s.length; i++) {
        if (s[i] == 'a')
            c++;
    }

    // calculate 'a' the rest
    for (let i = 0; i < r; i++) {
        if (s[i] == 'a') {
            ca++
        }
    }

    // combine main and rest then calculate
    let multipliedStr = c * Math.floor(n / s.length);
    
    return multipliedStr + ca;
}
var result = repeatedString(10, "aba")
console.log(result)