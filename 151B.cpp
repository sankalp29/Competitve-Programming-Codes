#include<bits/stdc++.h>
using namespace std;
 
int maxTaxi,maxPizza,maxGirl;
 
int cheak(string s)
{
    if(s[0]==s[1] and s[1]==s[3] and s[3]==s[4] and s[4]==s[6] and s[6]==s[7]) return 1;
    if(s[0]>s[1] and s[1]>s[3] and s[3]>s[4] and s[4]>s[6] and s[6]>s[7]) return 2;
    return 3;
}
 
int main()
{
    int n,t,taxi,pizza,girl,i,j,r;
    string name,number;
    vector<pair<pair<string,int>,pair<int,int> > >v;
    bool taken;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>t>>name;
        taxi=pizza=girl=0;
        for(j=1; j<=t; j++)
        {
            cin>>number;
            r=cheak(number);
            if(r==1) ++taxi;
            else if(r==2) ++pizza;
            else ++girl;
        }
        v.push_back(make_pair(make_pair(name,taxi),make_pair(pizza,girl)));
        maxTaxi=max(maxTaxi,taxi);
        maxPizza=max(maxPizza,pizza);
        maxGirl=max(maxGirl,girl);
    }
    cout<<"If you want to call a taxi, you should call: ";
    for(taken=i=0; i<n; i++)
    {
        if(v[i].first.second==maxTaxi)
        {
            if(taken) cout<<", ";
            cout<<v[i].first.first;
            taken=1;
        }
    }
    cout<<".\n";
    cout<<"If you want to order a pizza, you should call: ";
    for(taken=i=0; i<n; i++)
    {
        if(v[i].second.first==maxPizza)
        {
            if(taken) cout<<", ";
            cout<<v[i].first.first;
            taken=1;
        }
    }
    cout<<".\n";
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for(taken=i=0; i<n; i++)
    {
        if(v[i].second.second==maxGirl)
        {
            if(taken) cout<<", ";
            cout<<v[i].first.first;
            taken=1;
        }
    }
    cout<<".\n";
    return 0;
}