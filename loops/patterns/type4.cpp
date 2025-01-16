#include<iostream>
int main(){
    size_t n{};
    std::cout<<"enter your number n : ";
    std::cin>>n;
    for(size_t i {};i<n;i++){
        size_t b = n;
        for(size_t a{};a<(i+1);a++){
            std::cout<<b<<" ";
            b--;
        }
        std::cout<<std::endl;
       
    }
}