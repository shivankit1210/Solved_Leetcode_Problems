function merge(a1, a2) {
  let m = a1.length;
  let n = a2.length;
  let newarray = [];

  for (let i = 0; i < m; i++) {
    newarray.push(a1[i]);
  }
  for (let j = 0; j < n; j++) {
    newarray.push(a2[j]);
  }
  return newarray;
}

function sorting(a1,a2) {
 let mergearray = merge(a1,a2);
 let l=mergearray.length;
  for (let i = 0; i < l - 2; i++) {
    let min = i;
    for (let j = i; j < l - 1; j++) {
      if (mergearray[j] < mergearray[min]) {
        min = j;
      }
    }
    let temp = mergearray[i];
    mergearray[i] = mergearray[min];
    mergearray[min] = temp;
  }
  return mergearray;
}
const a1 = [2, 13, 24, 35];
const a2 = [1, 6, 16, 17, 23, 30, 37, 45];
let result=sorting(a1,a2);
console.log(result);
