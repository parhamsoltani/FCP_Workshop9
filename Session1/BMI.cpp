#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double height,weight;
	cin>>height>>weight;
	double BMI = weight/(height*height);
	cout<<fixed<<setprecision(2)<<BMI;
	return 0;
}