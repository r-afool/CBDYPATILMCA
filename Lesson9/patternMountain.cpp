#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f_0 = 0, f_1 = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<j<<'\t';
        }
        for(int j = 0 ; j<n-i; j++){
            cout<<" \t";
        }
        for(int j = 0 ; j<n-i-1; j++){
            cout<<" \t";
        }
        for(int j = i; j >= 1; j--){
            if(j==n){
                continue;
            }
            cout<<j<<'\t';
        }
        cout<<endl;


    }
}