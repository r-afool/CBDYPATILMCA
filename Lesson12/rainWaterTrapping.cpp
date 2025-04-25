#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int towers[1000];
    for(int i = 0; i < n; i++){
        cin>>towers[i];
    }
    int maxOnLeft[1000];
    maxOnLeft[0] = -1;
    int maxSoFar = towers[0];
    for(int i = 1; i < n; i++){
        maxOnLeft[i] = maxSoFar;
        maxSoFar = max(maxSoFar,towers[i]);
    }
    int maxOnRight[1000];
    maxOnRight[n-1] = -1;
    maxSoFar = towers[n-1];
    for(int i = n-2; i >= 0; i--){
        maxOnRight[i] = maxSoFar;
        maxSoFar = max(maxSoFar, towers[i]);
    }
    int totWater = 0;
    for(int i = 1; i < n; i++){
        int level = min(maxOnLeft[i],maxOnRight[i]);
        int waterOnCurTower = level-towers[i];
        totWater+=max(0,waterOnCurTower);
    }
    cout<<totWater<<endl;
    
}