const checkPalindrome = (arr) => {
    let lastCharacter = '';
    for(let i=Number.parseInt(arr.length/2); i >=0 ; i--) 
    {   
        if(arr[i-1] != arr[arr.length - i]) {
            return false;
        }

        console.log(i, arr[i-1], arr[arr.length - i])
    }
    return true
}
const substrCount = (n, s) => {
    let count = 0, index = 2;
    
    do{
        for(let i = index; i <= n; i++){
            let str = s.slice(i-index, i)
            if(checkPalindrome(str))
                count +=1
            console.log(str, count)
        }
        index++;
    } while(index < n)

    return count + n
}

//var input = "asasd"
var input = "abcbaba" // answer: 10
//var input = "cbbabbc"
//var input = "aaaa"
var results = substrCount(input.length, input) 
console.log(results)