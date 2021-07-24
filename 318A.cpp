#include<bits/stdc++.h>
using namespace std;
// t(n) =a + (n-1)d
//1) for n is even and n is odd
//the total number of even terms = (n= 2+ (totalNumberOfEven-1)*2)
//the total number of odd terms = (n-1 = 1+(totalNumberOfOdd-1)*2)
//
int main(){
	long long n,k;
	cin>>n>>k;
	long OddTerms = 0;
	if(k<=(n+1)/2){
		//n is even
		cout<<k*2-1;
	}
	else{
		cout<<(k-(n+1)/2)*2;
	}

}