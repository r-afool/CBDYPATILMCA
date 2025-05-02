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
    for(int start = 0; start < n; start++){
        int curSum = 0;
        for(int end = start; end < n; end++){
            //include the (end)th element in curSum
            curSum += arr[end];
            maxSum = max(curSum,maxSum);
        }
    }
    // n*n
    cout<<maxSum;
    return 0;
}