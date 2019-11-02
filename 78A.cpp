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

bool check(char c){return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';}

int main()
{

    char s[3][256];
    int i,j,k;
    for(i=0;i<3;i++)gets(s[i]);
    for(i=0;i<3;i++){
        k=0;
        for(j=0;s[i][j];j++)
            if(check(s[i][j]))k++;
        if(i==1){
            if(k!=7)break;
        }
        else{
            if(k!=5)break;
        }
    }
    if(i==3)puts("YES");
    else puts("NO");
}