#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n-1; i++){
        int sml_index = i;
        for(int j = i; j < n; j++){
            if(arr[j]<arr[sml_index]){
                sml_index = j;
            }
        }
        swap(arr[i],arr[sml_index]);
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}