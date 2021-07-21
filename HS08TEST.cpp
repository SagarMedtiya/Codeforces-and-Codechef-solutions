#include<bits/stdc++.h>
using namespace std;

int main(){
	int amount;
	float balance;
	float money;
	cin>>amount>>balance;
	if(amount%5==0 && amount<=balance-0.5){
		money = balance - (float)amount -0.5;
		cout<<money;
	}
	else{
		cout<<balance;
	}
}