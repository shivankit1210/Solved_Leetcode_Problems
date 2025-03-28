#include <iostream>
#include<cstring>

using namespace std;

string ReverseStr(string str){
    int len = str.length();
    char temp;
    for(int i=0;i<len/2;i++){
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    return str;
}

int main()
{
    string str;
    getline(cin,str);
    string res = ReverseStr(str);
    cout<<res;

    return 0;
}
















#include <iostream>
#include<cstring>

char * ReverseStr(char str[20]){
    int len = strlen(str);
    char temp;
    for(int i=0;i<len/2;i++){
        temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    return str;
}

int main()
{
    char str[20]="i love to code";
    char * res = ReverseStr(str);
    std::cout<<str;

    return 0;
}