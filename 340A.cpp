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


int euclid(int a, int b)
{
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    int x,y,a,b;
    //freopen("a.in","r",stdin);
    scanf("%d%d%d%d",&x,&y,&a,&b);
    int cmmdc=x*y/euclid(x,y);
    int cate=0;
    if(a%cmmdc==0)
        cate++;
    cate+=b/cmmdc-a/cmmdc;
    printf("%d",cate);
    return 0;
}