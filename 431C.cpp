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

 
long long n, k, d;
long long memo[1000][2];
 
long long find(long long rem, bool flag){
    if(rem==0) return flag;
    if(rem<0) return 0;
 
    if(memo[rem][flag]!=-1) return memo[rem][flag];
 
    long long lim=min(rem,k), r=0;
    for(long long i=1;i<=lim;i++) { r+=find(rem-i,((i>=d)||flag)); r%=1000000007; }
 
    memo[rem][flag]=r;
    return r;
}
 
int main()
{
    memset(memo,-1,sizeof memo);
    cin>>n>>k>>d;
    cout<<find(n,false);
    return 0;
}