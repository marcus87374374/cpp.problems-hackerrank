#include<iostream>
int main(){
    size_t n{};
    std::cout<<"enter your number n : ";
    std::cin>>n;
    int e{};
    for(size_t i {};i<n;i++){
        int c{1};
       for(size_t a{};a<(n-i);a++){
        std::cout<<" ";
       }
       for(size_t b{};b<(i+1);b++){
        std::cout<<c;
        c++;
       }
       for(size_t d{};d<i;d++){
        std::cout<<e;
        e--;
       }
       e=i+1;
        std::cout<<std::endl;
     
    }
}