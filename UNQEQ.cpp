#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    
    while(test--){
        int n;
        cin>>n;
        
        vector<int> a;
        vector<int> b;
        
        if((n/2) % 2 == 1){
            cout<<"no\n";
        }
        else{
            cout<<"yes\n";
            int k= n/2;
            for(int i=0;i<k;i++){
                if((i+1)%2==0){
                    a.push_back(i+1);
                }
                else{
                    b.push_back(i+1);
                }
            }
            
            for(int i=0;i<k;i++){
                if((i+1)%2==0){
                    b.push_back(k+i+1);
                }
                else{
                    a.push_back(k+i+1);
                }
            }
            
            for(int i=0;i<n/2;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
            for(int i=0;i<n/2;i++){
                cout<<b[i]<<" ";
            }
            cout<<"\n";
        }
        
        
    }
    
	return 0;
}