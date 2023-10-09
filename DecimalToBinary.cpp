#include<iostream>
using namespace std;

int main(){

    int t;
    scanf("%d", &t);
    
    int num=t;

    int sum=0;
    while(num>0){
        int digit=num%2;
        sum = sum*10+digit;
        num=num/2;

    }
    cout<<sum;

    return 0;
}