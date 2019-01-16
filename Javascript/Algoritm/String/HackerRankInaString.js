function main(s) {
    s.map( text => {
        hackerrankInString(text)
    })
}

function hackerrankInString(s) {
    let pattern = "hackerrank"

    for(let i=0; i<s.length; i++) {
        if(s[i] == pattern[i%10]){
            console.log(s[i], pattern[i%10])
        }
        console.log(s[i], pattern[i%10])
    }
}

var stringSet=["hereiamstackerrank"/*, "hackerworld"*/]
main(stringSet)