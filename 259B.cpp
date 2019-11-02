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

int table[3][3];
main()
{
	int i,j,sum=0,k;
	int rowsum[3]={0};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&table[i][j]);
			sum+=table[i][j];
		}
	}
	
	k=sum/2;
	 
	for(i=0;i<3;i++)
	{
		sum=0;
		for(j=0;j<3;j++)
		{
			sum+=table[i][j];
		}
		rowsum[i]=sum;
	}
	 
	 table[0][0]=k-rowsum[0];
	 table[1][1]=k-rowsum[1];
	 table[2][2]=k-rowsum[2];
         
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
	           printf("%d ",table[i][j]);
	        }
		printf("\n");
	}
}