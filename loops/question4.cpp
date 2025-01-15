// Make a program to print the factorial of a positive integer
#include <iostream>
int main()
{
    int n{};
    std::cout << "Factorial of integer : ";
    std::cin >> n;
    int factorial{1};
    if(n<0){
        std::cout<<"Factorial is not defined for the negative integers."<<std::endl;
    }
     else if (n == 0 || n == 1)
    {
        factorial = 1;
    }
    else
    {
        for (size_t i{1};i<=n;i++)
        {
            factorial *= i;           
        }
    }
    std::cout<<"Factorial of integer "<<n<<" is "<<factorial<<std::endl;
}
