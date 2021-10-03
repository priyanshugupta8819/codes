#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    count<<"Enter n :";
    cin>>n;
    int count=0;
    for(int i=5;i<=n;i++){
        if(i%5==0){
            int temp = i/5;
            count = count + temp;
        }    
    }
    cout<<count<<endl;
return 0;
}
