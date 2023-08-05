#include <iostream>

unsigned long long int factorial(int n);

int main()
{

    int n;
    unsigned long long fact;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    fact = factorial(n);
    std::cout << "Factorial of " << n << " = " << fact;

    return 0;
}

unsigned long long int factorial(int n)
{
    //std::cout << "FInding Factorial of " << n << "\n";
    if (n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}