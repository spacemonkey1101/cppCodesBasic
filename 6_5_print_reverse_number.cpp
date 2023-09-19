#include <iostream>

using namespace std;

void printReverseNum(int n)
{
    while (n != 0)
    {
        cout << n % 10;
        n = n / 10;
    }
}

int main()
{
    int n;
    cin >> n;
    printReverseNum(n);
    return 0;
}