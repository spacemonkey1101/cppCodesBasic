#include <iostream>

using namespace std;

int fastExponentiation(int a, int n)
{
    // calculating a^n normally will take O(n) time but doing it this way will take O(logn)
    int ans = 1;
    while (n > 0)
    {
        int last_bit = n & 1;
        if(last_bit){
            ans=ans*a;
        }
        a = a * a;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int a, n;
    cout << "enter the base number" << endl;
    cin >> a;

    cout << "enter the exponent " << endl;
    cin >> n;

    cout << a << " raised to " << n << " is " << fastExponentiation(a, n);
}