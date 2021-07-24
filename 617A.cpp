#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int steps[] = {5,4,3,2,1};
	int size = sizeof(steps)/sizeof(steps[0]);
	int count=0;
	for(int i=0;i<size;i++){
		if(n>=steps[i]){
			count = count + (n/steps[i]);
			n = n % steps[i];
		}
	}
	cout<<count;
	return 0;
}