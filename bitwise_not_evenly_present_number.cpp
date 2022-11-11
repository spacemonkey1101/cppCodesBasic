/*Find a number which is singly present.

Given an array A of non negative integers such that every element is present even times in the array except one element which is singly present.
Implement a function that takes array A as argument and return the singly element.

Sample Input
3 2 3 4 4 4 4
4 4 4 4 5

Sample Output
2
5

Explanation :
for test case one, 2 is single frequency element in the array.
for test case two, 5 is single frequency element in the array.*/

#include <iostream>
#include <vector>
using namespace std;

int singleFrequencyElement(vector<int> A)
{
    // implement your code here
    int size = A.size();
    int result = 0;

    // idea is that A XOR A = 0
    for (int i = 0; i < size; i++)
    {
        result = result ^ A[i];
    }
    return result;
}

int main()
{
    vector<int> A = {2, 2, 2, 2, 5, 5, 3, 3, 1};

    cout << "The singly occuring element is " << singleFrequencyElement(A);
}
