#include<iostream>
int main(){
    size_t n{};
    std::cout<<"enter your number n : ";
    std::cin>>n;
    for(size_t i {};i<n;i++){
        int start{1};
        for(size_t a {};a<(i+1);a++){
            std::cout<<start<<" ";
            start++;
        }
        std::cout<<std::endl;
    }
}