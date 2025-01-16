#include <iostream>
int main(){
    size_t a{};
    std::cout<<"Please enter the number you want to start pattern from : ";
    scanf("%d",&a);
    int number{1};
    for(size_t i{1};i<=a; i++){
        for(size_t b{1};b<=a;b++){
            std::cout<<number<<" ";
            number++;                        
        }
        std::cout<<std::endl;
    }
    size_t c{};
    std::cout<<"enter your number : ";
    std::cin>>c;
    char starter='A';
    for(size_t i {1};i<=c;i++){
        for(size_t a{1}; a<=c;a++){
            std::cout<<starter<<" ";
            starter++;
        }
        std::cout<<std::endl;
    }
}