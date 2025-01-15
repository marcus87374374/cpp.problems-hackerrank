// Make an array that has n elements and make a program that print them in reverse order as they are in array list
// n should be taken from user and all the inputs also should be taken from user

#include <iostream>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    std::cin>>n;
    int numbers [n];
    for(size_t i{};i<n; i++){
        int a;
        std::cin>>a;
        numbers[i]=a;
    }
    for(size_t i{1}; i <=n;i++){
        std::cout<<numbers[n-i]<<" ";
    }
    
    return 0;
}
