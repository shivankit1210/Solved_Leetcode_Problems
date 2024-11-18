#include<iostream>
#include<cstring>

using namespace std;



char* reverseString(char str[20]){
    int n= strlen(str);
    char temp;

    for(int i=0 ;i<n/2;i++){
        temp=str[i];
        str[i] = str[n-i-1];
        str[n-i-1] = temp;
    }

    return str;


}

int main(){
    char str[20]="i am shivankit";
    char* res=reverseString(str);
    cout<<"reverse String is"<<res;



    return 0;
}


























// #include<iostream>
// #include<stack>

// using namespace std;

// int main(){

//     string str="Hellow Shivankit";
//     stack<char> s;


//     for( char c : str){
//         s.push(c);
//     }

//     str.clear();
//     while(!s.empty()){
//     str.push_back(s.top());
//     s.pop();
//     }
   
//    cout<<"string is"<<str<<endl;

//     return 0;
// }





