#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n-1; i++){
        bool hasSwapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){
                hasSwapped = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(hasSwapped == false){
            //i don't need to continue this loop
            //i can break
            break;
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}