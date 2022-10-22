#include <iostream>
using namespace std;
/*
1 2 4 6 8
lower bound of 3 = indexOf(4) =2

1 3 3 3 3 3 3 3
Lower bound of 3 = indexOf(first 3) = 1

Lower bound of x = index of 1st element <= x

Upper bound of x = index of 1st element > x

1 2 4 6 8
Upper bound of 3 = indexof(4) = 2

1 2 5 6 7 7 7 8 9
upper bound of 7 = indexOf(8) = 7

lower bound and upper bound can be found in log n
why?
this is an extension of binary search
*/

int lowerBound(int *arr, int size, int key)
{
    int l = 0, r = size - 1;
    int possibleAns, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            possibleAns = mid;
            r = mid - 1;
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return possibleAns;
}

int upperBound(int *arr, int size, int key)
{
    int l = 0, r = size - 1;
    int possibleAns, mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (arr[mid] == key)
        {
            possibleAns = mid;
            l = mid + 1;
        }
        else if (arr[mid] < key)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return possibleAns;
}

int main()
{
    int sampleArr[] = {7, 7, 7, 7, 7, 7};
    int size = sizeof(sampleArr) / sizeof(int);
    int largest = sampleArr[size - 1];

    int result = upperBound(sampleArr, size, largest) - lowerBound(sampleArr, size, largest) + 1;

    cout << result;
    return 0;
}