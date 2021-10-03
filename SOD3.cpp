#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll func(){
    ll l,r;
    cout<<"Enter ends :";
    cin>>l>>r;
    
    for(int i=0;i<3;i++){
        if(l>r)
            return 0;
        if(l<=r && l%3==0)
            break;
        else
            l++;
    }
    
    for(int i=0;i<3;i++){
        if(l>r)
            return 0;
        if(l<=r && r%3==0)
            break;
        else
            r--;
    }
    
    ll a = l/3;
    ll b = r/3;
    ll count = abs(a-b) + 1;
    
    return count;
}
int main(){
    int n;
    cin>>n;
    
    while(n--){
        cout<<func()<<endl;
    }
    
    return 0;
}
