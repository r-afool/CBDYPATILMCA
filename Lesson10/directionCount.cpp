#include<iostream>
using namespace std;
int main()
{
    char crr[1000];
    int n;
    cin>>n;
    cin>>crr;
    int vCount = 0, hCount = 0;
    for(int i = 0; i < n; i++){
        if(crr[i] == 'N'){
            vCount++;
        }
        else if(crr[i] == 'S'){
            vCount--;
        }
        else if(crr[i] == 'W'){
            hCount--;
        }
        else{
            hCount++;
        }

    }

    if(hCount > 0){
        for(int i = 0; i < hCount; i++){
            cout<<'E';
        }
    }
    if(vCount > 0){
        for(int i = 0; i < vCount; i++){
            cout<<'N';
        }
    }
    if(vCount < 0){
        for(int i = 0; i < -vCount ; i++){
            cout<<'S';
        }
    }
    if(hCount < 0){
        for(int i = 0; i < -hCount; i++){
            cout<<'W';
        }
    }
}