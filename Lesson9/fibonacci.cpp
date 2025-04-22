#include<iostream> 
using namespace std;
int main(){
    int n;
    cin>>n;
    int f_0 = 0, f_1 = 1;
    for(int i = 0; i < n; i++){
        cout<<f_0<<endl;
        
        //shifting
        int f_2 = f_1 + f_0;
        f_0 = f_1;
        f_1 = f_2;
    }
}