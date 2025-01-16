#include <iostream>
int main()
{
   //   My solution 

   // star patten
    int n{};
    std::cout<<"Enter the number you want to make a square pattern : ";
    std::cin>>n;
   for (size_t i{1}; i <= n; i++)
    {
        for (size_t a{1}; a <= n; a++)
        {
            std::cout << "* ";
        }
        std::cout<<std::endl;
    } 

    // number pattenint n{};
    int m{};
    std::cout<<"Enter the number you want to make a square pattern : ";
    std::cin>>m;
  
   for (size_t i{1}; i <= m; i++)
    {
        for (size_t a{1}; a <= m; a++)
        {
            std::cout <<a<< " ";
        }
        std::cout<<std::endl;
    } 
    // character pattern
    int x{};
    std::cout<<"Enter the number you want to make a square pattern : ";
    std::cin>>x;
  
   for (size_t i{1}; i <= x; i++)
    {
        char alphabet='A';
        for (size_t a{1}; a <= x; a++)
        {
            std::cout <<alphabet<< " ";
            alphabet++;// alphabet = alphabet +1 ='A'+1 =65+1 =66 ='B'
        }
        std::cout<<std::endl;
    } 


}