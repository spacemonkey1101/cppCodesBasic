#include <iostream>
using namespace std;

int main()
{
    char name[]{"Ritam"};

    cout << name << endl;

    char team[] = "Liverpool";

    cout << team << endl;

    // this is a charater array; above ones are string literals
    char alphabets[] = {'L', 'F', 'C'};

    cout << alphabets << endl; // would print L F C + garbage

    char alphabets1[] = {'L', 'F', 'C', '\0'};

    cout << alphabets1 << endl; // would print L F C only

    // use cin if you want to read a word -- no whitespaces
    /*cout << "enter a word" << endl;
    char word[20];
    cin >> word;
    cout << word << endl;
*/
    // use cin.getline if you want to read a sentence -- can get white space
    // using cin.getline immaediately after cin will lead cin.getline to pick up the newline character from earlier cin input
    cout << "enter a sentence" << endl;
    char sentence[50];
    cin.getline(sentence, 50);
    cout << sentence << endl;
    return 0;
}