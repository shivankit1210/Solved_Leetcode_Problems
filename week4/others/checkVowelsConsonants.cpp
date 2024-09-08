#include<iostream>
// #include<string>
using namespace std;

void checkVowelConsonant(string str){
    int vowels=0,consonants=0;
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            if(str[i]=='a' || str[i]=='e' || str[i]=='o' || str[i]=='i' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='O' || str[i]=='I' || str[i]=='U'){
            vowels++;
        }
        else
        consonants++;
        }
        
    }
    cout<<"vowels: "<<vowels<<endl<<"consonants: "<<consonants<<endl;
}

int main(){
    
 string str;
 cout<<"enter string; ";
 getline(cin,str);
 checkVowelConsonant(str);
    
    return 0;
}