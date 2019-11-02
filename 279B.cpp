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

int main()
{
	ll n,t;
	cin>>n>>t;
	ll a[n];
	for (ll i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	ll sum = 0; 
    ll cnt = 0, maxcnt = 0; 
  
    for (ll i = 0; i < n; i++) { 
        if ((sum + a[i]) <= t) 
        { 
            sum += a[i];  
            cnt++; 
        }  
		else if(sum!=0) 
        { 
            sum = sum - a[i - cnt] + a[i]; 
        } 
        maxcnt = max(cnt, maxcnt);  
    }
    cout<<maxcnt; 
}