#include <iostream>
// int x {0};
int fun(int n)
{
    // x variable will be initialized
    // only once in this code.
    static int x{0};
    if (n>0)
    {
        ++x;
        return fun(n-1) + x;
    }
    return 0;
}

int main()
{
    int x{ 3 };
    fun(x);

    return 0;
}