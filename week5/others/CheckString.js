//Program to check if one string can be formed using another string
//Program to check if one string can be formed using another string
function splitstr(str){
    str=str.split('');
    return str.sort();
}

function checkString(string1,string2){
    
    var char1 =splitstr(string1);
    var char2 =splitstr(string2);
    console.log(char1.join(''),char2.join(''));
    return console.log(char1.join('')==char2.join(''));
}


var string1=prompt("enter string first: ");
var string2=prompt("enter string second: ");
checkString(string1,string2);





// console.log(string1);
// console.log(string2);

