#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int a=0;a<n;a++){
        cin>>arr[a];
    }

    int i,j,index=0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                index = i+1;
                break;
            }
            if(index != 0){
                break;}
        }
        if(index != 0){
            break;}
    }

    if(index == 0){
        cout<<"-1"; }
    else{
        cout<<index; }
return 0;
}