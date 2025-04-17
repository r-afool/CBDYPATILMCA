#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    if((n & (1<<k)) != 0){
        cout<<k<<"th bit is set";
    }
    else{
        cout<<k<<"th bit is not set";
    }
    return 0;
}