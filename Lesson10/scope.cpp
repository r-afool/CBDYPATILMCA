#include<iostream>
using namespace std;
float pi = 3.14;
int main(){
    // int n = 5;
    // // int n = 4;
    // for(int i = 0; i < 5; i++){
    //     // int n = 1;
    //     // int n = 2;
    //     cout<<n;
    // }
    cout<<pi<<endl;
    int x = 5, y = 4;
    {
        {
            int x = 2;
            {
                int z = 10;
                cout<<x<<" "<<y<<" "<<z;
            }
            // cout<<z;
        }
    }
}