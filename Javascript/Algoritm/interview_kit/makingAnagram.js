

const makingAnagram = (strA, strB) => {
    let count = 0;
    let tabel = new Array(26).fill(0)

    /* ADD table A first */ 
    for(let i in strA){
        tabel[strA[i].charCodeAt() - 97] += 1
    }

    /* SUBSTRACT with  table B  */ 
    for(let i in strB){
        tabel[strB[i].charCodeAt() - 97] -= 1
    }
    //console.log(tabel)

    /* Addition */ 
    for(i in tabel) {
        count += Math.abs(tabel[i])
    }

    return count
}

var strA = "fcrxzwscanmligyxyvym" , strB ="jxwtrhvujlmrpdoqbisbwhmgpmeoke"
//var strA = "cde" , strB = "cba"
var results = makingAnagram(strA, strB);
console.log(results)