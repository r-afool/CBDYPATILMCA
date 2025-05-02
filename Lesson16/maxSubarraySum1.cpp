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
        for(int len = 1; len <= n-start; len++){
            //i want to calculate the sum of the subarray starting at 
            //the (start)th index and of length len
            int curSum = 0;
            for(int k = start,j = 0 ; j < len; j++, k++){
                curSum += arr[k];
            }
            maxSum = max(maxSum,curSum);

        }
    }
    // n*n*n
    cout<<maxSum;
    return 0;
}