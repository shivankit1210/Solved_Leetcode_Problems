function sorting(res) {
  let n = res.length;

  for (let i = 0; i < n - 1; i++) {
    let didswap = 0;
    for (let j = 0; j < n - i - 1; j++) {
      if (res[j] > res[j + 1]) {
        let temp = res[j];
        res[j] = res[j + 1];
        res[j + 1] = temp;
        didswap = 1;
      }
      
    }
    if (didswap == 0) {
      break;
    }
  }
  return res;
}

const arr = [2, 5, [14, [3, 31]], [22, 9], 6, [21, 45, 32]];
const res = arr.flat(Infinity);
console.log(res);
const Final = sorting(res);
console.log(Final)                                                                       
