#include <iostream>
using namespace std;

int squareRoot(int n) {
    int s = 1,e= n;
    while (s<=e){
        int mid = (s+e)/2;  
        if(mid*mid == n){
            return mid;
        } else if (mid*mid < n){
            s = mid+1;
        }else {
            e = mid-1;
        }
    }
    return 0;
}

int main()
{
    cout<<squareRoot(49);
    return 0;
}