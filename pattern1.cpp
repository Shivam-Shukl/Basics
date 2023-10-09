#include<iostream>
using namespace std;
int main(){

    for(int i=1;i<=4;i++){
        for(int j =1;j<=i;j++){
            cout<<"*";
        }
        for(int k=1;k<=8-2*i;k++){
            cout<<" ";
        }
        for(int l =1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl; 

        

        

    }
    for(int a =1;a<=4;a++){
        for(int m =4;m>=a;m--){
            cout<<"*";
        }
        for(int n=1;n<=2*a-2;n++){
            cout<<" ";
        }
        for(int o =4;o>=a;o--){
            cout<<"*";

        }
        cout<<endl;
    }
    

    return 0;

}