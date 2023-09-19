#include<iostream>

using namespace std;

void starPattern(int row){
    for(int i = 1 ; i <= row ; i++){
        for(int j = row; j>i;j--){
            cout<<" ";
        }
        for(int j = 1; j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
int row;
cin>>row;
starPattern(row);
}