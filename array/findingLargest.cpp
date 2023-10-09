#include<iostream>
using namespace std;

int main()
{

    int arr[6]={6,5,3,2,8,11};
    int largest =arr[0];
    for(int i=1;i<=5;i++){
        if(arr[i]>largest){
            largest =arr[i];
        }
    }
    cout<<largest;

    return 0;
}