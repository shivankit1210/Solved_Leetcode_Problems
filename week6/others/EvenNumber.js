
function EvenNumber(arr,n){
    const even=[];
    for(let i=0;i<n;i++){
        if(arr[i]%2==0){
            even.push(arr[i]);
        }
    }
    return even;
}

const arr=[69, 22, 53, 60, 80, 93, 77, 42, 92, 14, 97, 49, 98, 92, 28];
const n=arr.length;
res=EvenNumber(arr,n);
console.log(res);