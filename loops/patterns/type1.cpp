#include<iostream>
int main (){
    size_t n{};
    std::cout<<"enter the number : ";
    std::cin>>n;
    for(size_t i {0};i<n;i++){
        for(size_t a{0};a<(i+1);a++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}