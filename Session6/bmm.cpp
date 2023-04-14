#include <iostream>
using namespace std;

int main(){
    long long int n, m,temp;
    cin >>n>>m;
    long long a=n,b=m;
    while(m!=0){
    	temp=n%m;
    	n=m;
    	m=temp;
	}
    cout<<n<<" "<<(a*b)/n;
    return 0;
}