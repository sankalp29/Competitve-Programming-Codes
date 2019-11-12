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

int n,sum,sum1,z;
char a[11111];

int main (){
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i] == 'X'){
			sum++;
		}
		if(a[i] == 'x'){
			sum1++;
		}	
	}
	cout<<abs(n/2-max(sum,sum1))<<endl;
	z = abs(n/2-max(sum,sum1));
	for(int i = 0; i < n; i++){
		if(sum > sum1 && a[i] == 'X'){
			a[i] = 'x';
			z--;		 			
		}
		if(sum < sum1 && a[i] == 'x'){
			a[i] = 'X';
			z--;
		}
		if(z == 0){
			for(int i = 0; i < n ; i++){
				cout<<a[i]; 
			}
			return 0;
		}		
	}	
	return 0;	
}