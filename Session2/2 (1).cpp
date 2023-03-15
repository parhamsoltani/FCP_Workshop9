#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double R,r,l,r_a;
	cin>>r>>l>>r_a;
	
	R=r*l/(pow(r_a,2)*M_PI);
	
	cout<<fixed<<setprecision(2)<<R;
	
	return 0;
}