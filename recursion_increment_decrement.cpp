#include <iostream>

using namespace std;

void increment(int i, int num)
{
    if (i == num + 1)
    {
        return;
    }
    cout << i << ' ';
    increment(i + 1, num);
}

void decrement(int num)
{
    if (num == 0)
    {
        return;
    }
    cout << num << ' ';
    decrement(num - 1);
}
void recursiveIncDec(int num)
{
    decrement(num);
    cout << endl;
    increment(1, num);
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    recursiveIncDec(num);
    return 0;
}