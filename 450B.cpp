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

ios_base::sync_with_stdio(false);
 
    int x, y;
    cin >> x >> y;
 
    int n;
    cin >> n;
    int a[6] = {x, y, y - x, -x, -y, x - y};
    int res = a[(n - 1) % 6];
    while (res < 0) res += MOD;
    while (res >= MOD) res -= MOD;
    cout << res << endl;
    return 0;
}