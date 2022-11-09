#include <iostream>

using namespace std;

int setIthBit(int n, int i)
{
    int mask = 1 << i;
    return mask | n;
}
int main()
{
    int n, si;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << "Enter the ith bit to set" << endl;
    cin >> si;

    cout << "The ith bit is " << setIthBit(n, si) << endl;
    return 0;
}