#include<iostream>
using namespace std;
int main(){
    int count = 0;
    char ch;
    while(true){
        cin>>ch;
        // cout<<ch;
        if(ch == '$'){
            break;
        }
        else{
            count++;
        }
    }
    cout<<count;
    return 0;
}