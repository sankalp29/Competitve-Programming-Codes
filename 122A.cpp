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

int only4and7(int n)
{
	while(n!=0)
	{
		if(n%10!=4 && n%10!=7){return 0;}
		n=n/10;
	}
	return 1;
}

int main()
{
	map<int,int>m;
	vector<int>v;
	v.pb(4);
	v.pb(7);
	m[4]=1;
	m[7]=1;
	for (int i = 8; i <=1000; ++i)
	{
		if(only4and7(i)){v.pb(i);m[i]=1;}
	}
	for (int i = 8; i <=1000; ++i)
	{
		if(m.find(i)==m.end())
		{
			for (int j = 0; j < v.size(); ++j)
			{
				if(i%v[j]==0){v.pb(i);m[i]=1;break;}
			}
		}
	}
	int n;
	cin>>n;
	if(m[n]==1){cout<<"YES";return 0;}
	cout<<"NO";
}


