
function pangrams(s) {
    var m_map = new Map();
    
    for(let i=0; i < 26; i++) {
        m_map.set(i+97, 1);
    }

    for(let i=0; i< s.length; i++) {        
        let lowerCase = s[i].toLowerCase().charCodeAt();
        
        if(m_map.get(lowerCase) != 0) {
            m_map.set(lowerCase, 0);
        } 

        var testt = m_map.forEach(obj=> {
            
        })
    }
}

pangrams("Aabst");