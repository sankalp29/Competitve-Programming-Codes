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
using namespace std;

int main()
{
    int i,len,k;string s;cin>>s>>k;
    len=s.size();
    int plen=len/k;
    f(i,0,len)if(len%k||s[i]!=s[(i/plen)*plen+plen-1-(i%plen)]){cout<<"NO";return 0;}
    cout<<"YES";
}