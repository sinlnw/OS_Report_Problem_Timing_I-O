#include <iostream>

unsigned long long int factorial(int n);

int main()
{

    int n = 20;
    unsigned long long int fact;
    

    fact = factorial(n);
    std::cout << "Factorial of " << n << " = " << fact;

    return 0;
}

unsigned long long int factorial(int n)
{
    unsigned long long int tmp;
    std::cout << "Call factorial("<<n<<")"<< "\n";
    if (n > 1){
        std::cout <<"finding factorial("<<n<<") = "<<n<<" * factorial("<<n-1<<")"<< "\n";
        tmp = n * factorial(n - 1);
        std::cout <<"factorial("<<n<<") = "<<tmp<<"\n";
        return tmp;
    }
    else
        return 1;
}