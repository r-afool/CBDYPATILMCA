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
    int maxScore = 0;
    int i = 0, j = n-1;
    while(i < j){
        int w = j-i;
        int h = min(arr[i],arr[j]);
        maxScore = max(maxScore,w*h);
        if(arr[i] < arr[j]){
            // i want to discard this ith index
            i++;
        }
        else{
            // i want to discard this jth index
            j--;
        }
    }
    // n
    cout<<maxScore;
    return 0;
}