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
	string s;
	cin>>s;
	char a[5];
	a[0]='h';
	a[1]='e';
	a[2]='l';
	a[3]='l';
	a[4]='o';
	int k=0;
	for (int i = 0; i < 5; ++i)
	{
		int f=0;
		for (int j = k; j < s.length(); ++j)
		{
			if(s[j]==a[i])
			{
				f=1;k++;break;
			}
			k++;
		}
		if(!f){cout<<"NO\n";return 0;}
	}
	cout<<"YES\n";return 0;
}


