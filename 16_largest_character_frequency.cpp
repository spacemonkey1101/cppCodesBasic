/*Largest character.

Implement a function that takes array of characters and its length as argument and returns largest frequency character.


Sample Input

a b c d e e e

e e d d d

Sample Output

e

d

Explanation :

for test case one, e is the largest frequency character.

Similarly for test case two, d is the largest frequency character.*/
#include <iostream>
#include <cstring>
using namespace std;

char largestFrequencyCharacter(char c[], int size)
{
    int char_count[26]; // store character frequency
    for (int i = 0; i < 26; i++)
    {
        char_count[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        char_count[c[i] - 'a'] += 1;
    }
    int max_ind = 0, max = 0;
    for (int i = 0; i < 26; i++)
    {
        if (char_count[i] > max)
        {
            max = char_count[i];
            max_ind = i;
        }
    }
    return 'a' + max_ind;
}

int main()
{
    char test[] = "ababassss";
    cout << "Result is " << largestFrequencyCharacter(test, strlen(test));
    return 0;
}