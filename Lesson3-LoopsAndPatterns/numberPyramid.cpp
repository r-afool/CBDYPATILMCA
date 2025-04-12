#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }

        for(int j = 0,cnt = i; j < i; j++, cnt++){
            cout<<cnt;
        }
        for(int j = 0, cnt = 2*i-2; j < i-1; j++,cnt--){
            cout<<cnt;
        }
        cout<<endl;
    }
}
