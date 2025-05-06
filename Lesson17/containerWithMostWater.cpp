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
    int maxWater = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            maxWater = max(maxWater,min(arr[i],arr[j]) * (j-i));
        }
    }
    // n*n -> n^2
    cout<<maxWater;
    return 0;
}