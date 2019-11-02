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

bool palind(int hr,int min)
{
	if(hr==0 && min==0){cout<<"00:00";return true;}
	int hr1=hr/10;
	int min1=min/10;
	if(hr1%10==min%10 && hr%10==min1%10)
	{
		if(hr<10){cout<<"0"<<hr<<":";}
		else cout<<hr<<":";
		if(min<10){cout<<"0"<<min;}
		else cout<<min;
		return true;
	}
	return false;
}

int main()
{
	string s;
	cin>>s;
	int hr=(s[0]-'0')*10 + (s[1]-'0');
	int min=(s[3]-'0')*10 + (s[4]-'0');
 	while(1)
	{
		if(min==59){hr=hr+1;hr=hr%24;}
		min=min+1;
		min=min%60;
		if(palind(hr,min)){break;}
	}
}