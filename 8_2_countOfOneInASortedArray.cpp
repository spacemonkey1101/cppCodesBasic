/*Count of one in an array.

Implement a function that takes an sorted array of 1
and 0 as argument and returns number of 1 in it.

hint - Expected time complexity is O(log(n))

Sample Input
0 0 0 0 0 1
0 0 1 1 1

Sample Output
1
3

Explanation :

for test case one, number of 1 is one.

Similarly for test case two, answer should be 3.*/

#include <iostream>
using namespace std;

int firstOccuranceOfOneIndex(int *a, int size)
{
    int l = 0;
    int r = size - 1;
    int mid, possibleAns = size;
    while (l <= r)
    {
        mid = (r + l) / 2;
        if (a[mid] == 1)
        {
            possibleAns = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return possibleAns;
}

int countOne(int *a, int size)
{
    return size - firstOccuranceOfOneIndex(a, size);
}

int main()
{

    int arr[] = {1, 1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(int);
    cout << countOne(arr, size);
    return 0;
}