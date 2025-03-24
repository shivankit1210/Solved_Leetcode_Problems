//Count number of elements in an array

#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<int,int> count;
    int arr[8] = {1,2,3,1,5,2,1,3};
    
    for(int i=0;i<8;i++){
        count[arr[i]]++;
    }
    for(const auto& pair : count){
        std::cout<<pair.first<<"="<<pair.second<<std::endl;
    }
    

    return 0;
}