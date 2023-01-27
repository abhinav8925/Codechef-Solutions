/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 27th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/FINALSUM

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
    
    ll n,q;
    cin>>n>>q;
    ll a[n],sum=0;
    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll mx=0;
    while(q--)
    {
        ll z,b;
        cin>>z>>b;
        ll e=abs(z-b)+1;
        if(e%2==0)
            mx+=0;
        else if(e%2!=0)
            mx+=1;
    }
    
    cout << sum+mx << endl;
        
    
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
