// In this question we have to take two int inputs which will act as the boundaries and we have to print english equivalent of number if they are in set
//{x:-N, 1<=x<=9} and after that we have to tell if numbers are even or odd but this should only be done after the number 9.
// for example : int1 = 8
//               int2 = 11
// output should be : eight
//                    nine
//                    even
//                    odd


#include<iostream>
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a{};
    int b{};
    std::cin>>a;
    std::cin>>b;
    for(size_t n=a; n <=b;n++){
        if (n>=1&&n<=9){
             if(n==1){
                   std::cout<<"one"<<std::endl;
             }
             else if (n==2){
                   std::cout<<"two"<<std::endl;
             }
             else if (n==3){
                   std::cout<<"three"<<std::endl;
             }
             else if (n==4){
                   std::cout<<"four"<<std::endl;
             }
             else if (n==5){
                   std::cout<<"five"<<std::endl;
             }
             else if (n==6){
                   std::cout<<"six"<<std::endl;
             }
             else if (n==7){
                   std::cout<<"seven"<<std::endl;
             }
             else if (n==8){
                   std::cout<<"eight"<<std::endl;
             }
             else {
                   std::cout<<"nine"<<std::endl;
             }
        }
        else {
            if(n%2==0){
                std::cout<<"even"<<std::endl;
            }
            else{
                std::cout<<"odd"<<std::endl;
            }
        }
    }
    
    
    return 0;
}
