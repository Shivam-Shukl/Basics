#include<iostream>
using namespace std;

int main(){

    int n=10;
    // cout<<"input the binary no : ";
    // cin>>n;
    int sum=0;

    while(n>0){
        int digit=n%10;
        n=n/10;
        int x=1 ^ digit;
        sum=sum*10 +x;

    }
    cout<<"the 1's complement of the binary no is :"<<sum;

    return 0;
}