function kangaroo(x1, v1, x2, v2) {
  for(let i=0; i <= 10000; i++) {
    if( v2 > v1 && x2 > x1) {
      return "NO";
    }

    x1 += v1;
    x2 += v2;
    
    if( x1 == x2) {
      return "YES";
    }
  }
  return "NO";
}


var result = kangaroo(0,3, 4, 2);
console.log(result);