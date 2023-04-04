#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, pl;
	char le;
	
	cin>>le>>n;
	
	switch(le) {
		case 'A' : 
			pl= (n-1)*8 + 1;
			break;
		case 'B' : 
			pl= (n-1)*8 + 2;
			break;
		case 'C' : 
			pl= (n-1)*8 + 3;
			break;
		case 'D' : 
			pl= (n-1)*8 + 4;
			break;
		case 'E' : 
			pl= (n-1)*8 + 5;
			break;
		case 'F' : 
			pl= (n-1)*8 + 6;
			break;
		case 'G' : 
			pl= (n-1)*8 + 7;
			break;
		case 'H' : 
			pl= (n-1)*8 + 8;
			break;
	}
	cout<<pl;
	
	
	
	
	 
}