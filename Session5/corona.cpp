#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int age,weight,height;
	string glass,mask,skin,hair;
    cin>>age>>weight>>height>>skin>>hair>>glass>>mask;
    int t=0;
    if(mask == "Nadare") cout<<"Qaribas";
    else{
    	t=1;
        if(age <=45 && age >=15) t++;
        if(weight<=120 && weight>=60) t++;
        if((height<=160 && height>=150) || (height<=200 && height>=180)) t++;
        if(skin=="Sand" || skin=="Bronze") t++;
        if(hair=="Black"|| hair=="Brown") t++;
        if(glass == "Nadare") t++;
        if(t==1) cout<<"Qaribas";
        else if(t==7) cout<<"Ashnas";
        else cout<<"Shayad";
    }
    return 0;
}