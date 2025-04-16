#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        // int val;
        // cin>>val;
        // arr[i] = val;
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i = n-1; i>=0;i--){
        cout<<arr[i]<<" ";
    }
}