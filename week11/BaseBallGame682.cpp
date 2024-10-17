class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        int n;
        // 1. traverse the array using loop
        // 2a. Check if it is numeric simply add that number
        // 2b. check if it is C remove last element using pop<<<
        // 2c. check if it is D multibly 2 by previous value in res
        // 2c. check if it us '+' , add previous 2 score(nums[i-1]+ nums[i-2])
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                res.pop_back();

            } else if (operations[i] == "D") {
                n = res.size();
                res.push_back(res[n - 1] * 2);
            } else if (operations[i] == "+") {
                n = res.size();
                res.push_back(res[n - 1] + res[n - 2]);
            } else {
                int num = stoi(operations[i]);
                res.push_back(num);
            }
        }
        return accumulate(res.begin(), res.end(), 0);
    }
};






























// class Solution {
// public:
//     int calPoints(vector<string>& operations) {
//         vector<int> res;
//         int pro;
//         int n;
//         string ch;
//         // 1. traverse the array using loop
//         // 2a. Check if it is numeric simply add that number
//         // 2b. check if it is C remove last element using pop<<<
//         // 2c. check if it is D multibly 2 by previous value in res
//         // 2c. check if it us '+' , add previous 2 score(nums[i-1]+ nums[i-2])
//         for (int i = 0; i < operations.size(); i++) {
//             ch = operations[i];
//             if (ch == "C") {
//                 res.pop_back();

//             } else if (ch == "D") {
//                 n = res.size();
//                 pro = res[n - 1] * 2;
//                 res.push_back(pro);
//             } else if (ch == "+") {
//                 n = res.size();
//                 res.push_back(res[n - 1] + res[n - 2]);
//             } else {
//                 int num= stoi(ch);
//                 res.push_back(num);
//             }
//             // ch = operations[i];
//             // Switch(ch) {
//             // case 'C':
//             //     res.pop_back(ch);
//             //     break;
//             // case 'D':
//             //     n = res.size();
//             //     pro = res[n - 1] * 2;
//             //     res.push_back(pro);
//             //     break;
//             // case '+':
//             //     n = res.size();
//             //     res.push(nums[n - 1] + nums[n - 2]);
//             // default:
//             //     int num = ch - '0';
//             //     res.push_back(num);
//             // }
//         }
//         return accumulate(res.begin(),res.end(),0);
//     }
// };