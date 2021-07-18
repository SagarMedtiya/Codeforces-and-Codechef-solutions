#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,y,z, sum1=0,sum2=0, sum3=0;
	cin>>n;
	while(n--){
		sum1 += x;
		sum2 += y;
		sum3 += z;
	}
	if(sum1==0 && sum2==0 && sum3==0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}