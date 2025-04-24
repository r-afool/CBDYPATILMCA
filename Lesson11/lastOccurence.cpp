#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int ans = -1;
    int s = 0, e = n-1; 
    while(s<=e){
        int m = (s+e)/2;
        if(arr[m] > target){
            //i should discard the right half
            //i should shift my ending point
            e = m-1;
        }
        else if(arr[m] < target){
            //i should discard the left hadf 
            // i should shift my starting point 
            s = m+1;
        }
        else{
            ans = m;
            s = m+1;
        }
    }
    if(ans == -1){
        cout<<"Element was not found";
    }
    else{
        cout<<"Element found at index : "<<ans;
    }
}