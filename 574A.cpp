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
	int n;
	cin>>n;
	int x,val;
	cin>>x;
	priority_queue<int>q;
	for (int i = 0; i <n-1; ++i)
	{
		cin>>val;
		q.push(val);
	}
	int ans=0;
	while(q.top()>=x)
	{
		int t=q.top();
		x++;
		t--;
		q.pop();
		q.push(t);
		ans++;
	}
	cout<<ans;
}

