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
	string a,b;
	cin>>a>>b;
	if(a.length()!=b.length()){cout<<"NO";return 0;}
	char a1,a2,b1,b2;
	int c=0;
	int arr1[26]={0},arr2[26]={0};
	for (int i = 0; i < a.length(); ++i)
	{
		arr1[a[i]-'a']++;
		arr2[b[i]-'a']++;
	}
	for (int i = 0; i < 26; ++i)
	{
		if(arr1[i]!=arr2[i]){cout<<"NO";return 0;}
	}

	for (int i = 0; i < a.length(); ++i)
	{
		if(a[i]!=b[i])
		{
			c++;
			if(c==3){cout<<"NO";return 0;}
			if(c==1)
			{
				a1=a[i];
				b1=b[i];
			}
			else
			{
				b2=b[i];
				a2=a[i];
				if(a1!=b2 || b1!=a2){cout<<"NO";return 0;}
			} 
		}
	}
	cout<<"YES";
}

