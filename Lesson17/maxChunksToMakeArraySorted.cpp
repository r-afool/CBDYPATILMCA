#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int maxOnLeft[1000], minOnRight[1000];
    int maxSoFar = arr[0];
    maxOnLeft[0] = arr[0];
    for(int i = 1; i < n; i++){
        maxSoFar = max(maxSoFar,arr[i]);
        maxOnLeft[i] = maxSoFar;
    }
    int minSoFar = arr[n-1];
    minOnRight[n-1] = arr[n-1];
    for(int i = n-2; i >= 0; i--){
        minSoFar = min(minSoFar,arr[i]);
        minOnRight[i] = minSoFar;
    }
    int count = 1;
    for(int i = 0; i < n-1; i++){
        if(maxOnLeft[i] <= minOnRight[i+1]){
            //I can creat e a new chunk
            count++;
        }
    }
    cout<<count;
    return 0;
}