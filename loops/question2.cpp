//Write a program that calculates the sum of all numbers from 1 to n, 
//where n is a positive integer provided by the user.
#include<iostream>
int main(){
    size_t n{};
    std::cout<<"Please enter the integers till which you want sum of integers : ";
    std::cin>>n;
    size_t sum{};
    for(size_t i{};i<=n;i++){
        sum += i;
    }
    std::cout<<"The sum of integers form 1 to "<<n<<" is "<<sum<<std::endl;
}
// we can do the same with function if you are interested check the fucntion folder question2.cpp
