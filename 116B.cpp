/*#include<bits/stdc++.h>
typedef long long ll;
typedef double ld;
#define vll vector<ll>
#define vvll vector< vll >
#define vld vector< ld >
#define vvld vector< vld >
#define pll pair<ll ,ll >
#define vllp vector< pll >
#define MOD 21000
#define endl "\n"
//#define MAX 1000000007
#define MAX 103
#define nl <<endl
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define pi 3.1415926536
using namespace std;
*/

#include <stdio.h>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 210000
#define int64 __int64
 
 
int64 ans = 0;
int n,m,st;
int arr[MAX];
int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
char str[100][100];
 
 
int main()
{
    int i,j,k;
 
 
    while (scanf("%d%d",&n,&m) != EOF) {
 
        ans = 0;
        for (i = 1; i <= n; ++i)
            scanf("%s",str[i]+1);
        for (i = 1; i <= n; ++i)
            for (j = 1; j <= m; ++j)
                if (str[i][j] == 'P') 
                    for (k = 0; k < 4; ++k) {
 
                        int ii = i + dir[k][0];
                        int jj = j + dir[k][1];
                        if (str[ii][jj] == 'W') {
                            
                            ans++,str[ii][jj] = '.';
                            break;
                        }
                    }
                
 
        printf("%I64d\n",ans);
    }
}