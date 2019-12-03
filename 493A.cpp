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
	string home,away;
	cin>>home>>away;
	int n;
	cin>>n;
	map<int,int>hm;
	map<int,int>am;
	int t,no;
	char ch,ca;
	while(n--)
	{
		cin>>t>>ch>>no>>ca;
		if(ch=='h')
		{
			if(ca=='r' && hm[no]!=-1){hm[no]=-1;cout<<home<<" "<<no<<" "<<t nl;}
			else if(hm[no]==1){cout<<home<<" "<<no<<" "<<t nl;hm[no]=-1;}
			else if(hm[no]!=-1)hm[no]=1;
		}

		else
		{
			if(ca=='r' && am[no]!=-1){am[no]=-1;cout<<away<<" "<<no<<" "<<t nl;}
			else if(am[no]==1){cout<<away<<" "<<no<<" "<<t nl;am[no]=-1;}
			else if(am[no]!=-1)am[no]=1;
		}

	}
}


