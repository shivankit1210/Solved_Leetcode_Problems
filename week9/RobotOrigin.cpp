// class Solution {
// public:
//     bool judgeCircle(string moves) {
//         int x=0;
//         int y=0;
//         for(char ch : moves){
//             if(ch=='U'){
//                 y++;
//             }
//             else if(ch=='D'){
//                 y--;
//             }
//             else if(ch=='R'){
//                 x++;
//             }
//             else{
//                 x--;
//             }
//         }
//         return (x==0 && y==0);
//     }
// };

class Solution {
public:
    bool judgeCircle(string moves) {
        int u=0;
        int d=0;
        int l=0;
        int r=0;

        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='U')
               u++;
            else if(moves[i]=='D')
               d++;
            else if(moves[i]=='L')
               l++;
            else
              r++;
            

        }

        if(u==d&&l==r)
           return true;
        return false;
        
    }
};