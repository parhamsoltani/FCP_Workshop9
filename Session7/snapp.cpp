#include <iostream>
using namespace std;
int main() {
    int n ,m ,cost[101],s=0,costs ,aghaz,payan;
    cin>>n>>m;
    for(int i=0;i<n*n;i++) {
        cin>>cost[i];
    }
    for(int j=0 ;j<m;j++) {
	    cin>>aghaz>>payan;
	    costs=(aghaz-1)*n+payan-1;
	    s+=cost[costs];
	}
    cout<<s;
}
