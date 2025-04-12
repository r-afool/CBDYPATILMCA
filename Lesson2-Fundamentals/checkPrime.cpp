#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int root = sqrt(n);
    bool isPrime = true;
    for(int i = 2; i <= root && isPrime; i++){
        if(n%i == 0){
            isPrime = false;
        }
    }
    if(isPrime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}