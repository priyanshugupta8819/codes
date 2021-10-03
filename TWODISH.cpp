#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int n, fru, veg, fish;
        cin>>n>>fru>>veg>>fish;
        
        if(n <= veg){
            if((fish + fru) >= n){
                cout<<"yes\n";
            }
            else{
                cout<<"no\n";
            }
        }
        else{
            cout<<"no\n";
        }
        
    }
    
    return 0;
}
