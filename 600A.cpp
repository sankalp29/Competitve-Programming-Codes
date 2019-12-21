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
#define f(i,a,b) for(int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

 
bool number(const string& text)
{
    if (text.size() == 0)
        return false;
 
    if (text.size() == 1 && text[0] == '0')
        return true;
 
    if (text[0] == '0')
        return false;
 
    for(int i = 0; i < text.size(); ++i)
    {
        if (!(text[i] >= '0' && text[i] <= '9'))
            return false;
    }
 
    return true;
}
 
 
int main()
{
 
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
 
    string str;
    getline(cin, str);
 
 
    vector<string> a;
    vector<string> b;
 
    string current;
    for(int i = 0; i < str.size(); ++i)
    {
        if (str[i] == ',' || str[i] == ';')
        {
            if (number(current))
                a.push_back(current);
            else
                b.push_back(current);
 
            current = "";
        }
        else
            current.push_back(str[i]);
    }
 
    if (number(current))
        a.push_back(current);
    else
        b.push_back(current);
 
 
    string result_a;
    string result_b;
 
 
    for(int i = 0; i < a.size(); ++i)
    {
        if (i)
            result_a += ",";
 
        result_a += a[i];
    }
 
 
    for(int i = 0; i < b.size(); ++i)
    {
        if (i)
            result_b += ",";
 
        result_b += b[i];
    }
 
    if (a.size() == 0)
        cout << "-" << endl;
    else
        cout << "\"" << result_a << "\"" << endl;
 
    
    if (b.size() == 0)
        cout << "-" << endl;
    else
        cout << "\"" << result_b << "\"" << endl;
 
 
}