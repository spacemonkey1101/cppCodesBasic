#include <iostream>

using namespace std;

void resetRangeBit(int &n, int i, int j)
{
    // input is 10111111
    // i is 1 and j is 3
    // result should be 10110001

    // mask should be 11110001
    // let a be 11110000
    // let b be 00000001

    // we can get a as 11111111<<j+1

    int a = (~0) << (j + 1);
    //we can get b as ~(11111111<<i)
    int b;
    if (i == 0)
    {
        b = 0;
    }
    else
    {
        b = (~0) << i;
        b = ~b;
    }

    // then we would set the mask
    int mask = a | b;

    // final result
    n = n & mask;
}
int main()
{
    int n, i, j;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << "Enter the bit from which we start clearing " << endl;
    cin >> i;

    cout << "Enter the bit where we stop clearing" << endl;
    cin >> j;

    resetRangeBit(n, i, j);

    cout << "The new numvber is " << n << endl;
    return 0;
}