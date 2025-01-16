#include<iostream>
int main (){
    size_t n{};
    std::cout<<"enter the number : ";
    std::cin>>n; 
    for(size_t i {0};i<n;i++){
        static int start{1};
        for(size_t a{0};a<(i+1);a++){
            std::cout<<start<<" ";
        }
        std::cout<<std::endl;
            start++;
    }
    // character patten
    size_t d{};
    std::cout<<"number dal be : ";
    std::cin>>d;
    for(size_t i {};i<d;i++){
        static char starter{'A'};
        for(size_t a{};a<(i+1);a++){
            std::cout<<starter<<" ";
        }
        std::cout<<std::endl;
        starter++;
    }
}