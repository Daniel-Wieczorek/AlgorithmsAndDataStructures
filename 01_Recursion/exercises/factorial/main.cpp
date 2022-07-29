#include <iostream>

/*
n! = 1 * 2 * 3 * 4 * ... n
factorial(n) = 1 * 2 * 3 * ... * (n-1) * n
so
factorial(n) = factorial(n-1) * n
*/

int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return factorial(n-1)*n;
}

int main()
{
    std::cout << "Factorial: " << factorial(10) << std::endl;
    return 0;
}