#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    int arr1[1000], arr2[1000];
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }   
    for(int i = 0; i < m; i++){
        cin>>arr2[i];
    }
    int nextInsert = m+n-1;
    int idx1 = n-1, idx2 = m-1;
    while(nextInsert != idx1){
        int candidate1 = arr1[idx1];
        int candidate2 = arr2[idx2];
        if(candidate1 > candidate2){
            arr1[nextInsert] = candidate1;
            idx1--;
        }
        else{
            arr1[nextInsert] = candidate2;
            idx2--;
        }
        nextInsert--;
    }
    for(int i = 0; i < m+n; i++){
        cout<<arr1[i]<<" ";
    }

}