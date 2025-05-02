#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int maxSum = INT_MIN;
    int x_cur = 0;
    for(int end = 0; end < n; end++){
        x_cur = max(x_cur+arr[end],arr[end]);
        maxSum = max(maxSum,x_cur);
    }
    // n
    cout<<maxSum;
    return 0;
}