function find(str){
    let arr=str.split(" ")
    let max=arr[0];
    for(let i=1;i<arr.length;i++)
   if(arr[i].length > max.length){
    max=arr[i];
   }
   return max;
}



let str="i am pro javascript developer"
let res=find(str)
console.log(res)


