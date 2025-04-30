#include<iostream>
using namespace std;

int main()
{
    int bin, dec = 0, power = 1;
    cin>>bin;
    while(bin){
        int curBit = bin%10;
        bin/=10;
        dec += curBit * power;
        power *= 2;
    }
    cout<<dec;
    return 0;
}