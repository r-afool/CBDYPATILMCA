#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n/2 + 1;
    for(int i = 1; i <= m; i++){
        //print some spaces 
        for(int j = 0; j < 2*(m-i); j++){
            cout<<"  ";
        }
        for(int j = i; j >= 1; j--){
            cout<<j<<" ";
        }
        for(int j = 0; j < i-1; j++){
            cout<<"  ";
        }
        for(int j = 0; j < i-2; j++){
            cout<<"  ";
        }
        for(int j = 1; j <= i; j++){
            if(i == 1){
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    for(int i = m-1; i >= 1; i--){
        //print some spaces 
        for(int j = 0; j < 2*(m-i); j++){
            cout<<"  ";
        }
        for(int j = i; j >= 1; j--){
            cout<<j<<" ";
        }
        for(int j = 0; j < i-1; j++){
            cout<<"  ";
        }
        for(int j = 0; j < i-2; j++){
            cout<<"  ";
        }
        for(int j = 1; j <= i; j++){
            if(i == 1){
                break;
            }
            cout<<j<<" ";
        }
        cout<<endl;
        
    }

}