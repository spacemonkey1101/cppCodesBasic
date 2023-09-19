/*
Sum of digits at odd position
Write a program that reads a positive integer N as an input and
prints the sum of digits at odd position of the number.
Note : The first digit of the number from the left is assumed
to occupy the first (odd) position.
Sample Input
548

Sample Output
13

Sample Input
45789

Sample Output
20*/

#include <iostream>
using namespace std;
int sumOfOddPosDigit(int num)
{
    int sum = 0, digit;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 100;
    }
    return sum;
}

int main()
{
    cout << (sumOfOddPosDigit(45789) == 20) << endl;
    cout << (sumOfOddPosDigit(548) == 13) << endl;
    return 0;
}