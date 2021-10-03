#include<bits/stdc++.h>
using namespace std;
//no
int main(){
    int n = 5;
    int arr[] = {2,3,2,2,2};
    
    int tempArr[n];
    tempArr[0] = arr[0];
        
    int count = 1;
    for(int i=1;i<n;i++){
        for(int j=0;j<count;j++){
            if(arr[i] != tempArr[j]){
                tempArr[count] = arr[i];
                count++;
            }
        }
    }

    for(int j=0;j<count;j++){
        cout<<tempArr[j]<<" ";
    }

return 0;
}
