
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n/2+1;
    for(int i = 1; i <= m; i++){
        //print m-i+1 stars
        for(int j = 0; j < m-i+1; j++){
            cout<<"*\t";
        }
        for(int j = 0; j < i-1; j++){
            cout<<" \t";
        }
        for(int j = 0; j < i-2; j++){
            cout<<" \t";
        }
        for(int j = 0; j < m-i+1; j++){
            if(i == 1 && j == 0){
                continue;
            }
            cout<<"*\t";
        }
        cout<<endl;
    }
    for(int i = m-1; i >= 1; i--){
        //print m-i+1 stars
        for(int j = 0; j < m-i+1; j++){
            cout<<"*\t";
        }
        for(int j = 0; j < i-1; j++){
            cout<<" \t";
        }
        for(int j = 0; j < i-2; j++){
            cout<<" \t";
        }
        for(int j = 0; j < m-i+1; j++){
            if(i == 1 && j == 0){
                continue;
            }
            cout<<"*\t";
        }
        cout<<endl;
    }
}