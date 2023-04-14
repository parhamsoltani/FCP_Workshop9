#include<iostream>
using namespace std;

int check(long int n){
	int x=1;
	for(long int i=2;i<n;i++){
		if(n%i==0)
			x=0;
	}
	if(n==1)
		x=0;
	return x;
}

int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }

int main(){
	int n,s,x=0,p;
	cin>>n;
	s=getSum(n);
	
	for(int i=n+1; x<s; i++){
		if(check(i)){
			x++;
			p=i;
		}
	}
	cout<<p;
}