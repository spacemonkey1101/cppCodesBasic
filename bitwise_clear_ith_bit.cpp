#include <iostream>

using namespace std;

void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = mask & n;
}
int main()
{
    int n, i;
    cout << "Enter the number" << endl;
    cin >> n;

    cout << "Enter the ith bit to clear" << endl;
    cin >> i;

    clearIthBit(n, i);

    cout << "The new numvber is " << n << endl;
    return 0;
}