#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	
	int duration;
	double principal, annual_interest_rate;
	cin>>principal>>annual_interest_rate>>duration;
	int n = duration*12;
	double r = annual_interest_rate/(100*12);
	double monthlypayment = (principal*(r*pow((1+r),n)))/(pow((1+r),n)-1);
	cout<<fixed<<setprecision(6)<<monthlypayment;
	
	return 0;
}
