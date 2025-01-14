// in this question we have to take input(int) from the user and after reading the input we have print what the question says
// First take input in form of int
// after that if the integer is less or equal to nine then we have to print english equivalent of that number but in small letters.
// if greater than 9 we have to print "Greater than 9"
#include <iostream>
int main()
{
    // Write your code here
  int n{};
  std::cin>>n;
    if(n<=9){
        if(n==1){
            std::cout<<"one"<<std::endl;
        }
        else if(n==2){
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
        else if (n==6) {
             std::cout<<"six"<<std::endl;        
        }
        else if (n==7){
             std::cout<<"seven"<<std::endl;
        }
        else if (n==8){
             std::cout<<"eight"<<std::endl;
        }
        else{
             std::cout<<"nine"<<std::endl;
        }
        
    }
  if(n>9){
            std::cout<<"Greater than 9";
        }

    return 0;
}
