// Make a program to write fibonaci series upto elements n
// make 
#include<iostream>
int main(){
    int n{};
    std::cout<<"enter the value of n : ";
    std::cin>>n;
    int a{0};
    int b{1};
    int c;
    if(n<=0){
        std::cout<<"invalid input";
    }
    else if (n==1){
        std::cout<<a;
    
    }
    else if(n==2){
        std::cout<<a<<","<<b;
    } 
    else{
        std::cout<<"0,1";
        for(size_t i{3};i<=n;i++){
            c= a+b;
            std::cout<<","<<c;
            a=b;
            b=c;
        }
    }
    
}
