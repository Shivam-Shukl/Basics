#include<iostream>
using namespace std;

//not a good code

int main(){

    int a[7]={2,3,2,4,5,6,3};
    for(int i=0 ;i<7;i++){
        for(int j=0;j<7;j++){
            if(i==j){
                continue ;

            }
            if(a[i]==a[j]){
                cout<<a[i];
                break;
                
            }
        }
    }


    return 0;
}