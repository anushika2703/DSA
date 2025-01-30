#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
    int cnt=0;
	int a=n;
	while(n>0){
	int d=n%10;
	if (d>0 && a%d==0){
		
		cnt++;
		n=n/10;
	}
	else{
		n=n/10;
	}
	
	}
	return cnt;
}
int main(){
	int n = 1234;
	cout<<"N:"<<n<<endl;
    int digits= countDigits(n);
	cout<<"Number of digits evenly divide : "<<digits<<endl;
}

