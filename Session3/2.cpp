#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	
	int a, b, c;
	cin>>a>>b>>c;
	double half_perimeter = (a+b+c)/2.0;
	double area = sqrt(half_perimeter*(half_perimeter-a)*(half_perimeter-b)*(half_perimeter-c));
	cout<<fixed<<setprecision(3)<<area;
	
	return 0;
}
