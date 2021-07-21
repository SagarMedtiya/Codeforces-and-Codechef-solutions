#include<bits/stdc++.h>
using namespace std;


int main(){
	int k,n,w; // k=the cost of the first banana, n= initial dollar, w= no of banana
	cin>>k>>n>>w;
	int total=0;
	total=k*(w*(w+1))/2 - n;
	if(total < 0){
		cout<<0;
	}
	else{
		cout<<total;
	}
}