#include <iostream>

using namespace std;

int isPowerOfTwo(int n)
{
    // if n & n-1 is 0 it means n is a power of two
    return (n & (n - 1)) == 0 ? 1 : 0;
}

int main()
{

    int num;
    cout << "Enter a number that you want to check " << endl;
    cin >> num;

    if (isPowerOfTwo(num))
    {
        cout << num << " is a power of 2" << endl;
    }
    else
    {
        cout << num << " is NOT a power of 2" << endl;
    }
}