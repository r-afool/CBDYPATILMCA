#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp = n;
    int count = 0;
    // while(temp){
    //     if(temp&1) {count++;}
    //     temp >>=1;
    // }

    // int curBit = 1;
    // while(curBit <= n){
    //     if(n&curBit){
    //         count++;
    //     }
    //     cur<<=1;
    // }
    while(n!=0){
        n = n&(n-1);
        count++;
    }
    cout<<count;
}