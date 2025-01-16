#include<iostream>
int main (){
    size_t n{};
    std::cout<<"enter the number : ";
    std::cin>>n;
    for(size_t i {0};i<n;i++){
        static int c=1;
        for(size_t a{0};a<(i+1);a++){
            std::cout<<c<<" ";
            c++;
        }
        std::cout<<std::endl;
        
    }
}