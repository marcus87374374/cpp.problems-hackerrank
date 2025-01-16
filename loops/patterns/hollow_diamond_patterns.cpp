#include <iostream>
int main()
{
    size_t n{};
    std::cout << "enter the number : ";
    std::cin >> n;
    for (size_t i{0}; i < n; i++)
    {
        static int e{0};
        for (size_t a{}; a < (n - i); a++)
        {
            std::cout << " ";
        }
        if (i == 0)
        {
            std::cout << "*";
        }
        else
        {
            for (size_t b{i - 1}; b < (i); b++)
            {
                std::cout << "*";
            }
        }
        for (size_t c{1}; c < (2 * e); c++)
        {
            std::cout << " ";
        }
        for (size_t d{i - 1}; d < i; d++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        e++;
    }
    for (size_t l{0}; l < n; l++)
    {
        static size_t h{n - 1};
        for (size_t a{}; a < l + 1; a++)
        {
            std::cout << " ";
        }
        for (size_t c{l - 1}; c < l; c++)
        {
            std::cout << "*";
        }
        for (size_t d{2 * h}; d > 1; d--)
        {
            std::cout << " ";
        }
        if (l != (n - 1))
        {
            for (size_t b{l - 1}; b < l; b++)
            {
                std::cout << "*";
            }
        }
        h--;
        if (!(l < 1))
        {

            std::cout << std::endl;
        }
    }
}