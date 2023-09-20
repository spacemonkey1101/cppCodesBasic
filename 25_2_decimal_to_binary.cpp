#include <iostream>

using namespace std;

int Decimal2Binary(int n)
{
    int sum = 0;
    int pow = 1;
    while (n != 0)
    {
        sum += (n % 2) * pow;
        pow *= 10;
        n /= 2;
    }
    return sum;
}

int main()
{
    cout << Decimal2Binary(10) << endl;
    cout << Decimal2Binary(16) << endl;
}