var input = 'beabeefeab';

/**
 * 
 * @param {String} charset 
 * @returns {Array}
 */
function removeDuplicate(charset) {
    let char_set = [];
    for (let i = 0; i < charset.length; i++) {
        char_set[charset[i]] = charset[i];
    }
    return char_set;
}

function twoCharacterSet(input) {
    
    var test = removeDuplicate(input);
    console.log(test.length)
    for(let i=1; i < 4; i++) {
       
       console.log("test");
    }
}

twoCharacterSet(input);