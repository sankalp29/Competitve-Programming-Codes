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
	vector<int>v;
	string s;
	for (int i = 0; i < 4; ++i)
	{
		cin>>s;
		v.pb(s.length()-2);
	}	
	char A[4]={'A','B','C','D'};
	int x=0,ch=2;
	for (int i = 0; i < 4; ++i)
	{
		int c1=0,c2=0;
		for (int j = 0; j < 4; ++j)
		{
			if(j!=i)
			{
				if(2*v[i]<=v[j]){c1++;}
				else break;
			}
		}
		for (int j = 0; j < 4; ++j)
		{
			if(j!=i)
			{
				if(v[i]>=2*v[j]){c2++;}
				else break;
			}
		}
		if(max(c1,c2)==3){x++;ch=i;}
	}

	if(x>1){cout<<'C';return 0;}
	cout<<A[ch];
}

