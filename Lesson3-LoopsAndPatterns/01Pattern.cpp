#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        // int num;
        // if(i%2 == 0){
        //     num = 1;
        // }
        // else{
        //     num = 0;
        // }
        bool num = (i%2==0);
        for(int j = 0; j <= i; j++){
            cout<<num;
            // num = 1-num;
            num = !num;
        }
        cout<<endl;
    }
    return 0;
}