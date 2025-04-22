#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int f_0 = 0, f_1 = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout<<f_0<<"\t";
            int f_2 = f_0 + f_1;
            f_0 = f_1;
            f_1 = f_2;
        }
        cout<<endl;
    }
}