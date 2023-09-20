/*Trailing Zeroes in N
----------------------
Trailing zeros are a sequence of 0 in the decimal representation
of a number, after which no other digits follow.
Given the number num , return the number of trailing zeroes it contains.
Example 1.
Input: 500
Output: 2
Explanation: 500 has 2 zeroes at its end, so it's 2.

Example 2.
Input: 90010
Output: 1
Explanation: 90010 has 1 zero at its end, so it's 1.*/

#include <iostream>
#include <cmath>
using namespace std;

int noOfTrailingZeroesFactorial(int num)
{
    int sum = 0;
    for (int i = 5; i <= num; i = i * 5)
    {
        sum += floor(num / i);
    }
    return sum;
}

int main()
{
    cout << noOfTrailingZeroesFactorial(4) << endl;
    cout << noOfTrailingZeroesFactorial(5) << endl;
    cout << noOfTrailingZeroesFactorial(10) << endl;
    cout << noOfTrailingZeroesFactorial(20) << endl;
    cout << noOfTrailingZeroesFactorial(100) << endl;
}