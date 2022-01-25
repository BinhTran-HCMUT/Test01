/*There will be two arrays of integers. Determine all integers that satisfy the following two conditions:

1. The elements of the first array are all factors of the integer being considered
2. The integer being considered is a factor of all elements of the second array

These numbers are referred to as being between the two arrays. Determine how many such numbers exist.*/


#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int r = 1;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return b;
}

int lcm(int a, int b)
{
    return a * b / (gcd(a, b));
}

int main()
{
    int n, m;
    cin >> n >> m;
    int x, number = 0;
    unsigned long int lcmArrA = 1, gcdArrB = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        lcmArrA = lcm(lcmArrA, x);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> x;
        gcdArrB = (i > 0) ? gcd(gcdArrB, x) : x;
    }


    for (int i = lcmArrA; i <= gcdArrB; i++)
    {
        if (i % lcmArrA == 0 && gcdArrB % i == 0)
        {
            number++;
        }
    }
    cout << number;
    return 0;
}