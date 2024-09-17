function Largest(arr,n) {
  for (let i = 0; i < n - 2; i++) {
    let min = i;
    for (let j = i; j < n; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    let temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
  return arr;
}

const arr = [23, 3, 35, 17, 4, 23, 5, 43, 553, 3, 231, 9];
let n = arr.length;
res = Largest(arr,n);
console.log(res[n-1]);
