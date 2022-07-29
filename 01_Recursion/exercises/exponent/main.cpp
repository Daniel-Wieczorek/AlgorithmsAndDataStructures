#include <iostream>

/*
Exponent m^n

2^3 = 2 * 2 * 2
m^n = m * m * ... 'for n times'

pow(m,n) = (m * m * m * ... * 'n-1 times') * m
pow(m,n) = pow(m, n-1) * m

*/

// Recursive solution, where:
// Time: O(n)
// Space: O(n)
int pow(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return pow(m, n - 1) * m;
}

int main()
{
    std::cout << "Exponent: " << pow(10) << std::endl;
    return 0;
}