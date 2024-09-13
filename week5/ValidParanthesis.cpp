




















// class Solution {
// public:
//     bool isValid(string s) {
//         int n=s.length();

//         std::stack<char>  mystack;
//         for(int i=0;i<n;i++){
//          if(s[i]== "(" || "{" || "["){
//             mystack.push();
//             char ch=  s[i];
//          }
//           else if(s[i]== ")" || "}" || "]"){

//             if(s[i]==")"){
//                 if(mystack.top()=="("){
//                     return true;
//                 }
//             }

//            else  if(s[i]=="}"){
//                 if(mystack.top()=="}"){
//                     return true;
//                 }
//             }

//            else  if(s[i]=="]"){
//                 if(mystack.top()=="["){
//                     return true;
//                 }
//             }
//           }
//                  }
//  }
        
         
//     }
// };