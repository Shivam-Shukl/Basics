#include<iostream>
using namespace std;

int main(){

    int arr[4]={2,3,4,8};
    for(int i=0;i<4;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<", ";
        }
    }

    return 0;
}