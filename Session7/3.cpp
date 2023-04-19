#include <iostream>
using namespace std;

int main(){
	
	int n,temp;
	cin>>n;
	temp=n*2-1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<temp/2-(i-1);j++) cout<<" ";
		for(int j=i; j<=i*2-1; j++){
			cout<<j;
		}
		for(int j=i*2-2; j>=i; j--){
			cout<<j;
		}
		for(int j=0;j<temp/2-(i-1);j++) cout<<" ";
		cout<<endl;
	}
}