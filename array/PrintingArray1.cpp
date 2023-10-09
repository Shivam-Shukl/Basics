#include<iostream>
using namespace std;

int main(){

    int a[5]={3,13,12,11,8};
    for (int i=0;i<=4;i++){
        for(int j=0;j<=4-i;j++){

            cout<<a[j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}