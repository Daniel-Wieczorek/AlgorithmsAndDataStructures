#include <iostream>

/*
// Solution with time complexity is O(1)
int sum(int n)
{
    return n *(n+1)/2
}
*/

/*
// Solution with time complexity is O(n)
int sum(int n)
{
    int s{0};
    for(int i=1; i<=n;i++)
    {
        s = s+i; // time complexity is n here.
    }
    return s;
}
*/

// Recursive solution with time complexity is O(n)
// For value n there is n+1 calls.
int sum(int n)
{
    if(n==0)
        return 0;
    else
        return sum(n-1)+n;
}

int main()
{
    std::cout << "Sum: " << sum(10) << std::endl;
    return 0;
}