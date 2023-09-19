// https://leetcode.com/problems/fizz-buzz/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> fizzBuzz(int n)
{
    vector<string> answer(n, "");
    for (int i = 0; i < n; i++)
    {
        int t = i + 1;
        if (t % 3 == 0 && t % 5 == 0)
        {
            answer[i] = "FizzBuzz";
        }
        else if (t % 3 == 0)
        {
            answer[i] = "Fizz";
        }
        else if (t % 5 == 0)
        {
            answer[i] = "Buzz";
        }
        else
        {
            answer[i] = to_string(t);
        }
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    vector<string> answer = fizzBuzz(n);
    for (auto x : answer)
    {
        cout << x << ",";
    }
}