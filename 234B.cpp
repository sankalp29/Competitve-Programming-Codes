#include<bits/stdc++.h>
#include <fstream>
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

    ifstream fin("input.txt");
	ofstream fout("output.txt");
	int n,k;
	fin>>n>>k;
	vector<pair<int,int> >v;
	int v1;
	for (int i = 0; i < n; ++i)
	{
		fin>>v1;
		v.pb(mp(v1,i+1));
	}
	sort(v.begin(),v.end());
	int c=0;
	vector<pair<int,int> >ans;
	for (int i =n-1; i>=0 && c<k; --i)
	{
		c++;
		ans.pb(mp(v[i].F,v[i].S));
	}

	fout<<ans[ans.size()-1].F nl;
	for (int i = 0; i < ans.size(); ++i)
	{
		fout<<ans[i].S<<" ";
	}
}	

