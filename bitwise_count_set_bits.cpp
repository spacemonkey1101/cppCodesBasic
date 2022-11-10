#include <iostream>

using namespace std;

int countSetBits(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    return count;
}

int main()
{
    int num;
    cout << "Enter the number";
    cin >> num;

    cout<<"The set bits of "<<num<< " is " << countSetBits(num);
}