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
    int majEle = arr[0], count = 1;
    for(int i = 1; i < n; i++){
        if(arr[i] == majEle){
            count++;
        }
        else{
            count--;
            if(count < 0){
                majEle = arr[i];
                count = 1;
            }
        }
    }
    cout<<majEle;
    return 0;
}