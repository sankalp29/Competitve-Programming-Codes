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
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

ll gcd(ll a,ll b)
{
	if(a==0){return b;}
	return gcd(b%a,a);
}

char findsa(char a)
{
	for (int i='a'; i<'z'; ++i)
	{
		if(i!=a){return i;}
	}
	return 'a';
}


char finddiff(char a,char b)
{
	for(char i = 'a'; i<='z'; ++i)
	{
		if(i!=a && i!=b){return i;}
	}
	return 'a';
}
int n,t,k1,k2;
char a[100005],b[100005];
char c[100005];
 
int main()
{
    int i,j;
    scanf("%d %d\n%s\n%s",&n,&t,&a,&b);
    k1=k2=n-t;
    for (i=0;i<n;i++)
        if (a[i]==b[i]&&k1&&k2) {
            c[i]=a[i];
            k1--;k2--;
    }
    for (i=0;i<n;i++)
        if (!c[i]&&k1) {
            c[i]=a[i];
            k1--;
        }
    for (i=0;i<n;i++)
        if (!c[i]&&k2) {
            c[i]=b[i];
            k2--;
        }
    if (k1==0&&k2==0) {
        for (i=0;i<n;i++)
            if (!c[i]) {
                c[i]='a';
                while (c[i]==a[i]||c[i]==b[i])
                    c[i]++;
            }
        printf("%s\n",c);
    }
    else
        printf("-1\n");
 
    return 0;
}