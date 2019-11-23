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
	int a[6];
	map<int,int>m;
	int c=0;
	vector<int>v;
	for (int i = 0; i < 6; ++i)
	{
		cin>>a[i];
		if(m.find(a[i])==m.end()){c++;m[a[i]]=1;}
		else m[a[i]]++;
	}
	if(c>3){cout<<"Alien";return 0;}

	if(c==3){cout<<"Bear";return 0;}
	if(c<=2){cout<<"Elephant";return 0;}
	

}