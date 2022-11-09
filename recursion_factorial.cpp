#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    cout << "factorial of " << num << " is " << factorial(num);
    return 0;
}