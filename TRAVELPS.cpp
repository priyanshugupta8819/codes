#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;
    
    while(x--){
        int t, a, b;
        cin>>t>>a>>b;
        
        char s[t+1];
        cin>>s;
        int i=0, t=0;
        for(i=0;i<t;i++){
            
            if(s[i] == '0'){
                t = t + a;
            }
            else{
                t = t + b;
            }
            
        }
        
        cout<<t<<endl;
    }
    
    return 0;
}
