#include<iostream>
using namespace std;
int main(){

    int a[5]={3,13,12,7,4};

    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}