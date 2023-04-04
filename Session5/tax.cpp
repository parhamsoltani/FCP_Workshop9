#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double p, av, av_l, av_u;
	
	cin>>p>>av;
	
	av_l= av - (av*0.025);
	av_u= av + (av*0.025);
	
	if (p>av_u) p*=0.8;
	else if (p<av_l) p*=0.95;
	else p*=0.9;
	
	cout<<fixed<<setprecision(2)<<p;
	
	
}