#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int d, l, r;
        cin>>d>>l>>r;
        
        if(d >= l && d<=r){
            cout<<"Take second dose now\n";
        }
        else if(d>r){
            cout<<"Too Late\n";
        }
        else{
            cout<<"Too Early\n";
        }
        
    }
    
    return 0;
}