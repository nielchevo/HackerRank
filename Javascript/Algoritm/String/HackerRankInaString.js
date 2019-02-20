
/** @define {Array} */
var stringSet = ['hereiamstackerrank', 'Hackskerss'];

function HackerRankInString(arr) {
    let strCheck = 'hackerrank';
    let j=0;
    if(arr.length < strCheck.length) {
        return;
    }
    for(let i=0; i < arr.length; i++) {
        console.log("%s %s", arr[i], strCheck[j]);
        if(arr[i] == strCheck[j]) {
            j++;
        }
    }

    return (j == strCheck.length) ? "YES" : "NO";
}

var results = HackerRankInString('heriamstackerrank');
console.log(results);