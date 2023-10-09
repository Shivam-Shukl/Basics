#include<iostream>
using namespace std;

int main(){
    int a[5]={3,11,13,8,4};
    for(int i=0;i<=4;i++){
        for(int j=4;j>=0;j--){
            cout<<a[j]<<" ";

        }
        cout<<endl;
    }

    return 0;
}