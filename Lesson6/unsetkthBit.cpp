#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    int mask = ~(1<<k);
    n &= mask;
    cout<<n;
    return 0;
}