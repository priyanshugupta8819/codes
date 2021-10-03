#include<bits/stdc++.h>
#define ll long long int
#define max 5

//commented part done without using function
// int main(){
//     int n;
//     cout<<"Enter array Size:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//     int arrSum[n];
//     arrSum[0] = arr[0];
//     for(int i=1;i<n;i++){
//         arrSum[i] = arr[i] + arrSum[i-1];
//     }
//     int temp = arrSum[0];
//     for(int i=1;i<n;i++){
//         if(arrSum[i]>=temp){
//             temp = arrSum[i];
//         }
//     }

//     int ans = algo(n, arr);
//     cout<<ans;

// return 0;
// }

using namespace std;
int algo(int n, int arr[]){
    int arrSum[n];
    arrSum[0] = arr[0];
    for(int i=1;i<n;i++){
        arrSum[i] = arr[i] + arrSum[i-1];
    }
    int temp = arrSum[0];
    for(int i=1;i<n;i++){
        if(arrSum[i]>=temp){
            temp = arrSum[i];
        }
    }
    return temp;
}

int main(){
    int n;
    cout<<"Enter array Size:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = algo(n, arr);
    cout<<ans;

return 0;
}
