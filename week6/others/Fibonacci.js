function Fibonacci(n){
    let arr=[0,1];
    for(let i=0;i<n;i++){
        sum=arr[i]+arr[i+1];
        arr.push(sum);
    }
    return arr;
}


const n=prompt("enter number:");
const res= Fibonacci(n);
console.log(res);