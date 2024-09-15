function input(arr, n) {
  for (var i = 0; i < n; i++) {
    arr[i] = prompt(`Enter element ${i + 1} of array:`);
  }
  return arr;
}

function InputArrays(n) {
  var arr1 = [];
  var arr2 = [];

  arr1 = input(arr1, n);
  arr2 = input(arr2, n);

  for (let k = 0; k < n; k++) {
    if (arr2[k] != arr1[k] * arr1[k]) {
      return false;
    }
  }
  return true;
}

var n = 3;
const result=InputArrays(n);
console.log(result);