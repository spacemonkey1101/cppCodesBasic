#include <iostream>

using namespace std;

int actualReverseNum(int n)
{
    int r = 0, digits = 0, t = n, pow = 1;
    while (t != 0)
    {
        t = t / 10;
        digits++;
        pow = pow * 10;
    }
    pow = pow / 10;
    while (n != 0)
    {
        int last_digit = n % 10;
        r = r + (last_digit * pow);
        pow = pow / 10;
        n = n / 10;
    }
    return r;
}

int main()
{
    int n;
    cin >> n;
    cout << actualReverseNum(n);
    return 0;
}