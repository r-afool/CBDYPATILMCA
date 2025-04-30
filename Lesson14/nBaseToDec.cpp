#include<iostream>
using namespace std;

int main()
{
    int inp, dec = 0, power = 1,base;
    cin>>inp>>base;
    while(inp){
        int curBit = inp%10;
        inp/=10;
        dec += curBit * power;
        power *= base;
    }
    cout<<dec;
    return 0;
}