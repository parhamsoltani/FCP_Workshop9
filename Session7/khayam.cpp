#include <iostream>
#include <iomanip>
using namespace std;

void print(int n) {
	int temp, s;
	int nums [n+1]={0};
    s=n-1;
    nums[s] = 1;
    for( int i=0; i<n; i++){
        cout<<"\n";
        for( int j=0; j<=i; j++){
            temp = nums[s+j] + nums[s+j+1];
            cout<<temp<<" ";
            nums[s+j] = temp;
        }
        s--;
    }
}
int main() {
    int n;
    cin>>n;
    print(n);
    return 0;
}