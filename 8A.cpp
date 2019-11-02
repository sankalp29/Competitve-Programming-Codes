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

int main()
{
    string s,a,b;
    cin>>s>>a>>b;
    bool f=0,f1=0;
    int x=s.find(a);
    int x1=s.find(b,x+a.size());
    if(x!=-1&&x1!=-1)f=1;
    reverse(s.begin(),s.end());
    x=s.find(a);
    x1=s.find(b,x+a.size());
    if(x!=-1&&x1!=-1)f1=1;
    if(f&&f1){cout<<"both";return 0;}
    if(f){cout<<"forward";return 0;}
    if(f1){cout<<"backward";return 0;}
    cout<<"fantasy";return 0;

}