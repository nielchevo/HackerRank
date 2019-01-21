const checkPalindrome = (arr) => {
    let maxIter = Number.parseInt(arr.length/2);
    
    /* constantaArray for fulfill  case: All characters except the middle one are the same, e.g. aad'a'a. */
    let constantArray = (arr.length % 2 == 0 ) ? arr[maxIter] : arr[maxIter+1] ;
    
    for(let i = maxIter-1; i >= 0; i--) 
    {   
        if(arr[i] != constantArray) {
            return false
        }
    }
    return true
}

const substrCount = (n, s) => {
    let count = 0, index = 2;
    
    /* Do looping in base string for palindrome probability */
    do{
        for(let i = index; i <= n; i++){
            // split specific palindrome check
            let str = s.slice(i-index, i)
            if(checkPalindrome(str))
                count +=1
        }
        index++;
    } while(index < n)

    /* Check base string, +1 if the string itself a palindrome */
    if(checkPalindrome(s))
        count +=1
    
    return count + n // count + single char.
}

//var input = "asasd"
//var input = "abcbaba" // answer: 10
//var input = "cbbabbc"
var input = "aaaa"
var results = substrCount(input.length, input) 
console.log(results)