// Make a program that takes two int inputs and at those address it contains their sum and absolute difference

#include<iostream>
int sum(int, int);
int absolute_difference(int,int);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a;
    int b;
    std::cin>>a>>b;
    int* p_a=&a;
    int* p_b=&b;
    int add_result = sum(a,b);
    int result_difference = absolute_difference(a, b);
    *p_a = add_result;
    *p_b = result_difference;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
    return 0;
}
int sum( int a, int b){
    return a+b;
}
int absolute_difference( int a, int b){
    if(a>b){
        return a-b;
    }
    else {
        return b-a;
    }
}
