#include <iostream>

using namespace std;

// using the clear bits in range function from previous program
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
    // we can get b as ~(11111111<<i)
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

void replaceBits(int &n, int i, int j, int v)
{
    // input = 1 0000 1110 100 , i = 2 , j = 6, m = 10101
    // first we clear off bits from i to j
    resetRangeBit(n, i, j);
    // now we have 1 0000 0000 000

    // shift mask by i
    v = v << i;
    // mask is 1010 100

    n = n | v;
}

int main()
{
    int n = 15;//1111
    int i = 1;
    int j = 2;
    int v = 2; //10

    cout << "The number is " << n << endl;
    replaceBits(n, i, j, v);
    // answer should be 1101 - 13
    cout << "The number after calling the function is " << n << endl;
    return 0;
}