#include <iostream>
#include <iomanip>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int p,ch,e_ch;
	cin>>p>>ch;
	
	e_ch=ch-(p%ch);
	
	cout<<e_ch;
	
	return 0;
}