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
char str[1000003];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	ll n;
	cin >> n;
	int sa = 0;
	int sg = 0;
	string res = "";
	for (int i = 1; i <= n; i++)
	{
		int a, g;
		cin >> a >> g;
		if (abs(sa + a - sg) <= 500){
			sa += a;
			res += "A";
		}
		
		else
		{
			sg += g;
			res += "G";
		}
	}
	cout<<res; 
	return 0;
}
 