#include<bits/stdc++.h>
typedef long long ll;
typedef double ld;
#define vll vector<ll>
#define vvll vector< vll >
#define vld vector< ld >
#define vvld vector< vld >
#define pll pair<ll ,ll >
#define nl <<endl
#define vllp vector< pll >
#define MOD 1000000007
#define endl "\n"
#define MAX 1000000007
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int arr[n+1],hash[100005],dp[n+1];
    for(i=0;i<100005;i++)
    hash[i]=-1;
    for(i=1;i<=n;i++)
    scanf("%d",&arr[i]);
    for(i=n;i>=1;i--)
    {
        if(hash[arr[i]]==-1)
        {
            dp[i]=1;
            hash[arr[i]]=0;
        }
        else
            dp[i]=0;
    }
    for(i=n-1;i>=1;i--)
    dp[i]+=dp[i+1];
    while(m--)
    {
        int l;
        scanf("%d",&l);
        printf("%d\n",dp[l]);
    }
    
    return 0;
}