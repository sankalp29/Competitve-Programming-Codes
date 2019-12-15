#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    char a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    int c=0;
    for(int i=0;i<n-1;i++)
        for(int j=0;j<m-1;j++)
            if((a[i][j]*a[i][j+1]*a[i+1][j]*a[i+1][j+1]) == 'f'*'a'*'c'*'e')
                c++;
    
    cout<<c<<endl;
    return 0;
    
}