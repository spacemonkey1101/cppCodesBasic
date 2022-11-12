#include <iostream>

using namespace std;

int isPalindrome(int num)
{
    if (num == 0 || (num / 10) == 0)
    {
        return 1;
    }

    int size = 0;
    int power = 1;

    for (int i = num; i > 0; i = i / 10)
    {
        size++;
        power = power * 10;
    }
    power = power / 10;

    int last_digit = num % 10;
    int first_digit = num / power;
    
    cout << "size is " << size << endl;
    cout << "last digit " << last_digit << endl;
    cout << "first digit " << first_digit << endl;

    if (last_digit != first_digit)
    {
        return 0;
    }
    num = num - (power * first_digit);
    num = num / 10;

    return isPalindrome(num);
}

int main()
{
    cout << isPalindrome(74347);
}
