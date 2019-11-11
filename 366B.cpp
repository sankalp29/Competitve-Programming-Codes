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

int p[100005];
long cost[100005];
 
int main(int argc, char *argv[])
{
    int n, k;
    int i, tmp, pos;
    long min;
    scanf("%d %d", &n, &k);
    for ( i = 0; i < n; i++ ) {
        scanf("%d", &tmp);
        cost[i%k] += tmp;
    }
    min = cost[0];
    pos = 0;
    for ( i = 0; i < k; i++ ) {
        if ( cost[i] < min ) {
            min = cost[i];
            pos = i;
        }
    }
    printf("%d\n", pos+1);
}



