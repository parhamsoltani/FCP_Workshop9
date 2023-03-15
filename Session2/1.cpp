#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double f,c,t;
	cin>>f;
	
	c = (f-32)*5/9;
	
	t = c+273;
	cout<<fixed<<setprecision(3)<<c<<' '<<t;
	
	return 0;
}