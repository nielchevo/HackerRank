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

    let flag = new Array(4).fill(0);
    for (let i in s) {
        if (charCheck(s[i], lower_case)) {
            flag[0] = 1;
        } else if (charCheck(s[i], upper_case)) {
            flag[1] = 1;
        } else if (charCheck(s[i], special_characters)) {
            flag[2] = 1;
        } else if (charCheck(s[i], numbers)) {
            flag[3] = 1;
        }
    }

    if (n >= 6) { flag[4] = 1; }

    let strong = 0;
    for (let i in flag) {
        if (flag[i] == 0) {
            strong += 1;
        }
    }

    return (6 - n > strong) ? 6 - n : strong;
}

var input= "#HackerRank";
var result = minimumNumber(input.length, input);
console.log(result);
