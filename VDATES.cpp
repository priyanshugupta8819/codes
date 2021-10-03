#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d,l,r;
    int ak;
    
    cout<<"Enter n :";
    cin>>n;
    
    for(int i=1;i<=n;i++){        
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
