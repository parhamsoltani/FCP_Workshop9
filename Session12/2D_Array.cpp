#include <iostream>
using namespace std;

int main()
{
    int const m = 3, n = 3;
    int A[10][10];
    bool flag = true;

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>A[i][j];

    for(int i=0;i<m ;i++)
        for(int j=0;j<n;j++)
            if(A[i][j]!=A[j][i])
                flag =false;

    if(flag == true)
        cout<<"matrix motagharen ast!";            
    else
        cout<<"matrix motagharen nist!";    

}