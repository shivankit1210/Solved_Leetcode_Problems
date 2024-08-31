#include <iostream>
#include <cstring>

char* reverseString(char str[20])
{
    int n=strlen(str);
    static char newstr[20] = "";
    for (int i = 0; i < n; i++)
    {
        newstr[i] = str[n -i- 1];
    }
    newstr[n]='\0';
    return newstr;
}

int main()
{
char str[20] = "tihsrah ayituc";
char* res=reverseString(str);
std::cout<<res;
    return 0;
}


// #include<iostream>
// #include<string>

// using namespace std;


// int main(){
//     string str = "tihsrah ayituc";
//     int i;
//     for(i=str.length() -1;i>0;i--){
//         cout<<str[i];
//     }
//     return 0;
// }

