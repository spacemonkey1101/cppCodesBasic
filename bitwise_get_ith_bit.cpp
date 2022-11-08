#include <iostream>

using namespace std;

int getIthBit(int n, int i) {
    int mask = 1 << i;
    return mask & n ? 1:0;
}
int main()
{
    int n,gi;
    cout<<"Enter the number"<<endl;
    cin>>n;

    cout<<"Enter the ith bit to get"<<endl;
    cin>>gi;

    cout<<"The ith bit is " << getIthBit(n,gi)<<endl;
    return 0;
}