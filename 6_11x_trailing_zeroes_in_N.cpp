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
using namespace std;

int noOfTrailingZeroes(int num)
{
    int count = 0;
    while ((num % 10) == 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}

int main()
{
    cout << noOfTrailingZeroes(90010) << endl;
    cout << noOfTrailingZeroes(500) << endl;
    cout << noOfTrailingZeroes(5) << endl;
}