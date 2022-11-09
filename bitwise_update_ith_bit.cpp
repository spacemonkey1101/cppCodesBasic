#include <iostream>

using namespace std;

void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = mask & n;
}

void updateIthBit(int &n, int i, int v)
{
    // first we would clear the ith bit
    clearIthBit(n, i);

    // then we would set the mask
    int mask = (v << i);
    n = n | mask;

    // another aproach is written in copy
}
int main()
{
    int n, i, v;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << "Enter the ith bit to update" << endl;
    cin >> i;

    cout << "Enter the updated value bit" << endl;
    cin >> v;
    updateIthBit(n, i, v);

    cout << "The new numvber is " << n << endl;
    return 0;
}