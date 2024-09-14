function MaxCountOfOne(array) {
  let max = 0;
  let count = 0;
  for (let i = 0; i < array.length; i++) {
    if (array[i] == 1) {
      count++;
      max = Math.max(max, count);
    } else {
      count = 0;
    }
  }
  return console.log(max);
}

const array = [1, 1, 2, 3, 1, 1, 1, 1, 1, 2, 3, 5, 6, 1, 1, 1, 1, 3];
MaxCountOfOne(array);
