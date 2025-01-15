//Write a program that prints the multiplication table for a given number n up to 10 multiples
#include <iostream>
int main(){
    size_t n{};
    std::cout<<"Multiplication table for integer : ";
    std::cin>>n;
    for(size_t i {1};i<11;i++){
        std::cout<<n<<" * "<<i<<" = "<<n*i<<std::endl;
    }
}
