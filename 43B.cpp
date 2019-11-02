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
char str[256];
int a[256];

using namespace std;

int main()
{
    register int i;
    gets(str);
    for(i=0;str[i];i++)a[str[i]]++;
    a[' ']+=256;
    gets(str);
    for(i=0;str[i];i++)if(--a[str[i]]<0)return puts("NO"),0;
    puts("YES");
    return 0;
}