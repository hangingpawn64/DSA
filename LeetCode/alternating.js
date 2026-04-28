var alternateDigitSum = function(n) {
    let str = n.toString();
    let element = 0;
    console.log(str)
    for (let i = 0; i < str.length; i++) {
        if(i%2 === 0){element += parseInt(str[i]);}
        else{element -= parseInt(str[i]);}
    }
    return element;  
};

console.log(alternateDigitSum(886996))