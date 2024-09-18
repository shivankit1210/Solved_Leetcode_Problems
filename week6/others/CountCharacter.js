function countcharacters(str) {
  let countchar = {};
  for (let char of str) {
    if (char != " ") {
      countchar[char] = (countchar[char] || 0) + 1;
    }
  }
  return countchar;
}

const str = "i am shivankit agarwal";
let result = countcharacters(str);
console.log(result);


// function countcharacters(str){
//     for (let i = 0; i < str.length; i++) {
//         let count = 0;
//         if (str[i] != " ") {
//           for (let j = 0; j < str.length; j++) {
//             if (str[i] == str[j]) {
//               count++;
//             }
//           }
//           console.log(`${str[i]}:${count}`);
//         }
//       }
// }
