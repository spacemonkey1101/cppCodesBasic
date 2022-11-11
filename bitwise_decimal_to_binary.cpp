#include <iostream>

using namespace std;

int convertToBinary(int num)
{
    // input = 9
    // output = 1001
    int ans = 0;
    int pow = 1;
    while (num > 0)
    {
        int last_digit = num & 1;
        ans = ans + pow * last_digit;
        pow = pow * 10;
        num = num >> 1;
    }
    return ans;
}
int main()
{
    int num;

    cout << "Enter the decimal number that you want to convert " << endl;
    cin >> num;

    cout << "The number is binary is " << convertToBinary(num) << endl;
}