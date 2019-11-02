#include<bits/stdc++.h>
typedef long long ll;
typedef double ld;
#define vll vector<ll>
#define vvll vector< vll >
#define vld vector< ld >
#define vvld vector< vld >
#define pll pair<ll ,ll >
#define vllp vector< pll >
#define MOD 1000000007
#define endl "\n"
#define MAX 1000000007
#define nl <<endl
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

int a[1000001]={0};
 
int main(){
    long long i,j,l,k,r,m,n,x,y,z,x1,y1,fl,t;
    a[0]=a[1]=1;
    for (i=2;i*i<=1000000;i++)
        if (!a[i])
            for (j=i*i;j<=1000000;j+=i)
                a[j]=1;
    scanf("%I64d", &n);
    for (i=0;i<n;i++) {
        scanf("%I64d", &x);
        y=(long long)sqrt(x*1.0);
        if (y*y==x && !a[y]) puts("YES");
        else puts("NO");
    }
    return 0;
}