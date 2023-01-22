/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 23rd January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/RAMDEV

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
    ll l,b,n;
    cin>>l>>b>>n;
    
    ll ans=0;
    ll k=0;
    for(ll i=1;i<=n;i++)
    {
        ll l1,b1;
        cin>>l1>>b1;
        k=max(((l1/l)*(b1/b)), ((l1/b)*(b1/l)));
        ans+=k;
    }

    cout << ans << endl;
    
    
}

int main() {
	
	
	solve();
	
	return 0;
}
