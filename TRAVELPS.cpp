#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    while(n--){
        int t, a, b;
        cin>>t>>a>>b;
        
        char s[t+1];
        cin>>s;
        int i=0, temp=0;
        for(i=0;i<t;i++){
            
            if(s[i] == '0'){
                temp = temp + a;
            }
            else{
                temp = temp + b;
            }
            
        }
        
        cout<<temp<<endl;
    }
    
    return 0;
}