#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,k,c;
	cin>>n>>k;
	for(int i=1; i<=n;i++){
		int t;
		cin>>t;
		if(t%k==0){
			c++;
		}
	}
	return 0;
}