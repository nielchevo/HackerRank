function charCheck(s, t) {
    for(let i in t) {
        if(s == t[i]) {
            return true;
        }
    }
    return false;
}

function minimumNumber(n, s) {
    let numbers = "0123456789"
    let lower_case = "abcdefghijklmnopqrstuvwxyz"
    let upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    let special_characters = "!@#$%^&*()-+"
    let flag = new Array(3).fill(0);

    for(let i in s) {
        if(charCheck(s[i], lower_case)) {
            flag[0] = 1;
        }else if(charCheck(s[i], upper_case)) {
            flag[1] = 1;
        }else if(charCheck(s[i], special_characters)) {
            flag[2] = 1;
        }else if(charCheck(s[i], numbers)) {
            flag[3] = 1;
        }
    }
    console.log(flag)
    let sum =0;

    for(let i in flag ){ 
        if(flag[i] == 1){
            sum+=1;
        }
    }

    return (n < 6) ? 6 - n : 4 - sum;
}
var input= "goxg";
var result = minimumNumber(input.length, input);
console.log(result);
