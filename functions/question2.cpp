// write a program to which give takes the int input n and give sum from i to n
// n should be positive

#include<iostream>
void summation(int, int&);
int main(){
    size_t n{};
    std::cout<<"Please enter the integer till which you want their sum : ";
    std::cin>>n;
    int sum{};
    summation(n,sum);
    std::cout<<"The sum of integers from i to "<<n<<" is "<<sum<<std::endl;
}
void summation(int a, int& sum){
    sum= (a*(a+1))/2;
}
