/*
Greatest common divisor.
Implement a function that takes two positive integers x and y as
an arguments and returns greatest common divisor of x and y.
Sample Input
4 5
6 14
Sample Output
1
2
Explanation :
For test case one, greatest common divisor of 4 and 5 is 1.
Similarly, for second test case, answer should be 2.
*/
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main()
{
    cout << gcd(12, 8) << endl;
    cout << gcd(10, 0) << endl;
}