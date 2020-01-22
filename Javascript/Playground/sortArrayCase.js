function sortArrayCase(){


    const mArry  = [{qty: 1, id: 222}, {qty: 1, id: 111}, {qty: 2, id: 111}, {qty: 2, id: 222}];
    
    const test = {mArry};
    console.log("hello world ", test);

    

    console.log(keySortById);

    const res = test.mArry.sort(function(cur, next) {
        if(cur.id === next.id)
        {
            if(cur.qty < next.qty)
            {
                console.log(cur.qty+" "+next.qty);
                return -1;
            }

            if(cur.qty > next.qty) {
                console.log(cur.qty+" "+next.qty);
                return -1;
            }

            return false;
        }
        return false;
    });

    console.log(res);
}

sortArrayCase();
