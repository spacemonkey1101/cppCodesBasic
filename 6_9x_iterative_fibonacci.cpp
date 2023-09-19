/*Fibonacci Series
WAP that reads a number N and prints Nth Fibonacci number.
The Fibonacci series is an infinite series, starting
from 0 (0th term) and 1 (1st term), in which every number in the
series is the sum of two numbers preceding it in the series.
Sample Input
2

Sample Output
1

The series is 0 1 1

Sample Input
5

Sample Output
3

The series is 0 1 1 2 3 */
#include <iostream>

using namespace std;
int fib(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int f0 = 0, f1 = 1, f2, term = 2;
    while (term <= n)
    {
        f2 = f1 + f0;
        f0 = f1;
        f1 = f2;
        term++;
    }
    return f1;
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}