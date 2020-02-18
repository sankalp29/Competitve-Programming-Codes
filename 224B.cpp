#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <string.h>
#include <string>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <limits.h>
 
#define MAX(a,b) ((a>b)?a:b)
#define MIN(a,b) ((a<b)?a:b)
#define PI M_PI
 
using namespace std;
 
int ar[100005];
int seg[100005];
int distinct;
int l,r;
int n,k;
 
int main()
{
	scanf("%d %d",&n,&k);
	
	memset(ar,0,sizeof(ar));
	distinct = 0;
	for (int i=0;i<n;i++)
	{
		scanf("%d",&seg[i]);
		ar[seg[i]]++;
		if (ar[seg[i]]==1) distinct++;
	}
	
	l = 0;
	r = n-1;
	
	if (k>distinct) printf("-1 -1\n");
	else
	{
		while(1)
		{
			r--;
			ar[seg[r+1]]--;
			if (ar[seg[r+1]]==0) distinct--;
			if (distinct<k)
			{
				ar[seg[r+1]]++;
				r++;
				distinct++;
				break;
			}
		}
		
		while(1)
		{
			l++;
			ar[seg[l-1]]--;
			if (ar[seg[l-1]]==0) distinct--;
			if (distinct<k)
			{
				l--;
				break;
			}
		}
		
		printf("%d %d\n",l+1,r+1);
	}
	
	
	
 	return 0;
}
 