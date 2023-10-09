#include<iostream>
using namespace std;

int fact(int n){
    if(n<0){
        return 0;

    }
    else if (n==0){
        return 1;
    }
    else{
        return n*fact(n-1); 

    }
    return 0;


}

int main(){

    int n;
    cout<<"input the number";
    cin>>n;
    cout<<"the factorial of the number is :";
    int factorial =fact(n);
    cout<<factorial;



    return 0;
}