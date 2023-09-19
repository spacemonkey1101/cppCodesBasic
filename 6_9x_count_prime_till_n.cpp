// https://leetcode.com/problems/count-primes/
// Seive of Eros

#include <iostream>
#include <vector>
using namespace std;

int countPrimes(int n)
{
    vector<bool> seen(n + 1, false);
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (seen[i])
            continue;
        count++;
        for (long int j = (long)i * i; j <= n; j = j + i)
            seen[j] = true;
    }

    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << countPrimes(n);
}