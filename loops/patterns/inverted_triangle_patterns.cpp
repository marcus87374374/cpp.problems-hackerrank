#include<iostream>
#include<iomanip>
int main(){
    size_t n{};
    std::cout<<"enter your number n : ";
    std::cin>>n;
    for(size_t i {};i<n;i++){
        for(size_t a {}; a<i;a++){
            std::cout<<" ";
        }
        static int c=1;
        for(size_t b {}; b<(n-i);b++){
            std::cout<<c;
        }
        std::cout<<std::endl;
        c++;
    }
     
}