#include<iostream>
using namespace std;

int main(){

    int a[5]={2,3,13,8,7};
    for(int i=0 ;i<=4;i++){
        for(int j=0;j<=4;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}