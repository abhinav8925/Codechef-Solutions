/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 23rd January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CARSELL

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++)
        cin>>v[i];
    
    sort(v.begin(),v.end(),greater<ll>());
    ll k=1;
    ll ans=0;
    for(ll i=0;i<n;i++)
    {
        if(v[i]>(i))
            v[i]=v[i]-i;
        else
            v[i]=0;
        
        ans+=v[i];
    }
    
    cout << ans%1000000007 << endl;
    
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
