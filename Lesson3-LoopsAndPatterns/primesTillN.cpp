#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int k = 2; k <= n; k++){
        bool isPrime = true;
        int root = sqrt(k);
        for(int i = 2; i <= root && isPrime; i++){
            if(n%i == 0){
                isPrime = false;
            }
        }
        if(isPrime){
            cout<<k<<" ";
        }
    }
    return 0;
}