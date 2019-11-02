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

const long long delta=1000*1000+3;
int s2i( string f)
{
     long long ret=0;
    for ( int i=0 ; i<f.size()-1 ; i++){
        ret= ret + (f[i]-'0');
        ret *=2;
        ret%=delta;
    }
    ret = ret + (f[f.size()-1]-'0');
    return ret;
}
int main()
{	
    string s , a;
    cin >> s;
    char t[]="+-[]<>.,";
    string k[]={"1010","1011","1110","1111","1001","1000","1100","1101"};
    for ( int i=0 ; i<s.size() ; i++)
        for ( int j=0 ; j<8 ; j++)
           if ( s[i]==t[j]){
                a+= k[j];
        break;}
      cout << s2i(a);
 
}