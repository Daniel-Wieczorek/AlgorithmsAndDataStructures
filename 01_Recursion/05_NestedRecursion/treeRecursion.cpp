#include <iostream>

int fun(int n)
{
    if (n>100)
    {
        return n-10;
    }
    return fun(fun(n+11)); // nested call
}

int main()
{
    int x{ 20 };
    std::cout << "Out: " << fun(x) << std::endl;

    return 0;
}