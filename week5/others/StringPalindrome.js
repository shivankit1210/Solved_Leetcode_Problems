function reversearray(str){
   let array=str.split('');
   const n=array.length;
   for(let i=0;i<n/2;i++){
    temp=array[i];
    array[i]=array[n-i-1];
    array[n-i-1]=temp;
   }
return console.log(array.join('')==str);
}
var str="arora";
let reverse=reversearray(str)
// CheckPalindrome(str);
