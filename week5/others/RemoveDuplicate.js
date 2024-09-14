function RemoveDuplicate(array) {
    let newarray=[];
  array.sort((a, b) => a - b);
  for (let i = 0; i < array.length; i++) {
    if (array[i] != array[i + 1]) {
        newarray.push(array[i]);
    }
  }
  return console.log(newarray)
}

const array = [2, 3, 5, 4, 6, 2, 5, 645, 5, 45, 234, 6, 2];
RemoveDuplicate(array);
