#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int maxOnLeft[1000];
    maxOnLeft[0] = -1;
    int maxSoFar = arr[0];
    for(int i = 1; i < n; i++){
        maxOnLeft[i] = maxSoFar;
        maxSoFar = max(maxSoFar,arr[i]);
    }
    // for(int i = 1; i < n; i++){
    //     //what is the largest element present on
    //     // the left of this current index i
    //     int maxEleOnLeft = arr[0];
    //     for(int j = 1; j < i; j++){
    //         // if(arr[j] > maxEleOnLeft){
    //         //     maxEleOnLeft = arr[j];
    //         // }
    //         maxEleOnLeft = max(maxEleOnLeft,arr[j]);
    //     }
    //     maxOnLeft[i] = maxEleOnLeft;
    // }
    
    for(int i = 0; i < n; i++){

        cout<<maxOnLeft[i]<<" ";
    }
}