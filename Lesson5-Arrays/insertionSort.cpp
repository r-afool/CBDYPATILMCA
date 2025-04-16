#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 1; i < n; i++){
        //i want to place the ith element in the sorted part
        //the sorted part is what? 0-(i-1)
        for(int j = i; j >= 1 && arr[j] < arr[j-1]; j--){
            swap(arr[j],arr[j-1]);
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}