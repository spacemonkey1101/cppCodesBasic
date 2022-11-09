#include <iostream>

using namespace std;

void clearLastIBits(int &n, int i)
{
    // get all 1s 111111111
    int all_one = ~0;

    // left shift ~0 i times
    int mask = (all_one << i);

    cout << "Mask is " << mask << endl;

    // return the and result
    n = n & mask;
}
int main()
{
    int n, i;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << "Enter the i bits to set to 0" << endl;
    cin >> i;

    clearLastIBits(n, i);

    cout << "The new numvber is " << n << endl;
    return 0;
}