#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    string s2 = "hello";
    string s3{"hello"};
    string s4{s2};
    string s5(8, 'h');
    string s6(8, 65); // repeat 8 times the chatr whose ascii is 65
    string s7 = "hi";
    s7 = "bye"; // re-assignment is possible here

    cout << "s1 " << s1 << " \ns2 " << s2 << endl;
    cout << "s3 " << s3 << " \ns4 " << s4 << endl;
    cout << "s5 " << s5 << " \ns6 " << s6 << endl;
    cout << "s7 " << s7 << endl;

    s7 = s7 + "see u soon";
    cout << "s7 after concatenation : " << s7 << endl;

    // string input
    string name;
    /*cout << "enter your name " << endl;
      cin >> name;                   // input : Ritam Bhatt
      cout << "Hi " << name << endl; // Hi Ritam; words after space are ignored
  */
    // to mitigate the above error
    cout << "enter your name " << endl;
    getline(cin, name);
    cout << "Hi " << name << endl; // this time the whole word with space is captured

    // we can use a different deliminator than '\n'
    cout << "enter your name " << endl;
    getline(cin, name, '$');
    cout << "\nthis got captured\n"
         << name << endl;

    // read a char -- ch s=  cin.get()
    // read a char array -- cin.getline(arr,100,'$)
    return 0;
}