// Make a function which takes four int values as parameters and return the max value 

#include<iostream>
using namespace std;
int max_of_four(int, int, int, int);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;   
    int b;   
    int c;   
    int d;   
    std::cin>>a>>b>>c>>d;
    std::cout<<max_of_four(a, b, c, d);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d){
    int max;
     max= (a>b)?a:b;
    int max1;
    max1 =(max>c)?max:c;
    int max2;
    max2 = (max1>d)?max1:d;
    return max2;
     
}
