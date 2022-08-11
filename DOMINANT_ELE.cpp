// Date - 11th August 2022
// Code by - Abhinav Anand

// Problem link -> https://www.codechef.com/problems/DOMINANT2

#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
    }
    bool ans=false;
    int mx=INT_MIN;
    for(auto s:mp)
    {
        if(s.second>mx)
        {
            mx=s.second;
            ans=true;
        }
        else if(s.second==mx)
        {
            ans=false;
        }
    }
    if(ans) cout <<  "YES" << endl;
    else    cout <<  "NO" << endl;
}

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}
