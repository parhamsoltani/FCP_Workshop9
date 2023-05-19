#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main() {
	
	int n,m ;
	
	cin >> n ;
	cin >> m ;
	
	int first_array[100] ;
	int second_array[100];
	
	for(int i=0 ; i<n; i++){
		int entry;
		cin >> entry;
		
		first_array[i] = entry ;
	}
	
	for(int i=0 ; i<m; i++){
		int entry;
		cin >> entry;
		
		second_array[i] = entry ;
	}
	
	
	int big_array[200];
	
	for(int i=0 ; i<n ; i++){
		big_array[i] = first_array[i];
	}
	
	
	for(int i=n ; i<n+m ; i++){
		big_array[i] = second_array[i-n];
	}
	
	for(int i=0 ; i < n+m ; i++){
		cout << big_array[i] << " " ;
	}
	
	
	
	return 0;
}
