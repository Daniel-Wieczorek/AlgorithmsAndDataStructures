#include <iostream>

double e(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1.0 + x * s / n;
    return e(x, n - 1);
}

double e2(int x, int n)
{
    double s{1}, num{1}, den{1};

    for (int i = 0; i <= n; i++)
    {
        num *= x;
        den *= i;
        s += num / den;
    }

    return s;
}

int main()
{
    std::cout << "Sum: " << e(5, 10) << std::endl;
    return 0;
}