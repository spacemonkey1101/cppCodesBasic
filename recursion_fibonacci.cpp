#include <iostream>

using namespace std;
int fibo(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }

    return fibo(num - 2) + fibo(num - 1);
}

int main()
{
    int num;
    cout << "Enthe the fibonacci term you wish to see" << endl;
    cin >> num;

    cout << "The value of " << num << "th fibonacci term is " << fibo(num) << endl;
}