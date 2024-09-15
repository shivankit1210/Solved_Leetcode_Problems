function InputArrays(arr1,arr2,n){
    
    //first array
    for(var i=0;i<n;i++){
    arr1[i]=prompt(`Enter element ${i+1} of array 1-`)
    }
    console.log("");
    //second array
    for(var j=0;j<n;j++){
    arr2[j]=prompt(`Enter element ${j+1}-  of array 2-`)
    }

    for(let k=0;k<n;k++){
        if(arr2[k]!=arr1[k]*arr1[k]){
            return console.log(false);
        }
    }
    return console.log(true);

    
}

var arr1=[];
var arr2=[];
var n=3;
InputArrays(arr1,arr2,n);


