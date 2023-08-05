#include <iostream>


int main() {
    int n = 1000;
    long long int sum = 0;

   
    //std::cout<<"sum of natural numbers of 1 to "<<n<<"\n";
    for (int i = 1; i <= n; ++i) {
        //std::cout<<"add  "<<i<<" to sum"<<"\n";
        sum += i;
        //std::cout<<"sum = "<<sum<<"\n";
    }

    std::cout << "Sum = " << sum;
    return 0;
}