#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n/2+1;
    for(int i =1; i <= m; i++){
        for(int j = 0; j < m-i; j++){
            cout<<" ";
        }
        // for(int j = 0; j < i; j++){
        //     cout<<"*";
        // }
        // for(int j = 0; j < i-1; j++){
        //     cout<<"*";
        // }
        for(int j = 0; j < 2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = m-1; i >= 1; i--){
        for(int j = 0; j < m-i; j++){
            cout<<" ";
        }
        // for(int j = 0; j < i; j++){
        //     cout<<"*";
        // }
        // for(int j = 0; j < i-1; j++){
        //     cout<<"*";
        // }
        for(int j = 0; j < 2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}