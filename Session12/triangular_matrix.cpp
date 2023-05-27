#include<iostream>

using namespace std;

int main() {
	int n,flagB=0,flagU=0;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) cin>>a[i][j];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j>i && a[i][j]!=0) flagU++;
			if(j<i && a[i][j]!=0) flagB++;
		}
	}
	if(flagU==0) cout<<"Payein Mosalasi";
	else if(flagB==0) cout<<"Bala Mosalasi";
	else cout<<"-1";
}