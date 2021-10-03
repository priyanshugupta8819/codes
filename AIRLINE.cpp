#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m,o;
	cout<<"Enter n:";
	cin>>n;
	while(n--){
	    int w1,w2,w3;
	    int d,e;
	    cin>>w1>>w2>>w3>>d>>e;

	    if(w1 + w2 <= d && w3 <= e){
		cout<<"yes\n";
	    }
	    else if(w1 + w3 <= d && w2 <= e){
		cout<<"yes\n";
	    }
	    else if(w3 + w2 <= d && w1 <= e){
		cout<<"yes\n";
	    }
	 else{
		cout<<"no\n";
	    }
	}
	return 0;
}
