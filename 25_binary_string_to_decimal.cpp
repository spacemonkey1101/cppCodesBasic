#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int binaryToDecimal(string s)
{
    // write your code here
    int length = s.length();
    int sum = 0, power = length - 1;
    for (int i = 0; i < length; i++, power--)
    {
        if (s[i] == '0')
        {
            continue;
        }
        sum += pow(2, power);
    }
    return sum;
}

int main()
{
    string s1 = "1010";

    cout << s1 << " in decimal is " << binaryToDecimal(s1) << endl;

    return 0;
}