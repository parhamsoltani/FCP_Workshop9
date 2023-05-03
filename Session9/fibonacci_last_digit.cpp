#include <iostream>
using namespace std;

int fib( int n) {
     int a = 0;
     int b = 1;
     int c;
     if (n == 0) return 0;
     if (n == 1) return 1;
    for (int i = 2; i <= n; i++) {
        c = (a % 10) + (b % 10);
        a = b;
        b = c;
    }

    return b;
}


int main(){
    int n;
    cin >> n;
    int f = fib(n);
    cout << f % 10;

    return 0;
}
