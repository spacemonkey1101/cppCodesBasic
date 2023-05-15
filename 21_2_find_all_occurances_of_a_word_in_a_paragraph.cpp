#include <iostream>
#include <string>

using namespace std;
void findOccurance(string para, string word)
{
    int count = 0;
    int index = -1;
    while (true)
    {
        index = para.find(word, index + 1);
        if (index == -1)
            break;
        count++;
    }
    cout << "The number of occurance is " << count;
}

int main()
{
    string para = "This is a cat. Cat is a car and dog is a dog";
    string word;

    cout << "Enter the word you want to search" << endl;
    cin >> word;

    findOccurance(para, word);
    return 0;
}