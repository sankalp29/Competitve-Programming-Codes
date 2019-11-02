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


string conv(string a1)
{
	string a="";
	for (int i = 0; i < a1.length(); ++i)
	{
		if(a1[i]>='A' && a1[i]<='Z'){a=a+char(a1[i]+32);}
		else if(a1[i]=='-'|| a1[i]=='_'||a1[i]==';'){continue;}
		else a=a+a1[i];
	}
	return a;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string a1,b1,c1;
	cin>>a1>>b1>>c1;
	string a=conv(a1);
	string b=conv(b1);
	string c=conv(c1);

	int n;
	cin>>n;
	string s;
	for (int i = 0; i < n; ++i)
	{
		cin>>s;
		string s1=conv(s);
		if(s1==a+b+c || s1==a+c+b || s1==b+a+c || s1==b+c+a || s1==c+a+b || s1==c+b+a){cout<<"ACC\n";}
		else cout<<"WA\n";
	}
}