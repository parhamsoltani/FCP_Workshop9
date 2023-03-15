#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	
	int k1, k2, k3, k4, k5;
	float a, b, c, d, e;
	cin>>k1>>k2>>k3>>k4>>k5;
	cin>>a>>b>>c>>d>>e;
	float score = (k1*a + k2*b + k3*c + k4*d + k5*e)/(k1 + k2 + k3 + k4 + k5);
	cout<<fixed<<setprecision(2)<<score;
	
	return 0;
}
