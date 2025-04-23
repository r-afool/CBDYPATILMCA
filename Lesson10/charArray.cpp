#include<iostream>
using namespace std;
int main(){
    char crr[1000];
    // cin>>crr;
    // cout<<crr;
    // cin.get(crr,1000);
    // cout<<crr;
    cin.getline(crr,1000,'$');
    cout<<crr;
}