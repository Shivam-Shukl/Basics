#include<iostream>
using namespace std;
//wrong code some problem in it.
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    for(int j =0 ;j<n;j++){
        cout<<arr[j]<<" ";
    }
    for(int k=0;k<n;k++){
        for(int l =2; l<arr[k];l++){
            if(arr[k]%l==0){
                cout<<arr[k]<<"is not prime"<<endl;
            }
            else{
                cout<<arr[k]<<"is prime"<<endl;
            }

        }
    }


    return 0;
}