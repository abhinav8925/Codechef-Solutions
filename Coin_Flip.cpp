/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 26th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CONFLIP?tab=statement

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
    ll g;
    cin>>g;
    while(g--)
    {
        ll i,n,q;
        cin>>i>>n>>q;
        
        if(n%2!=0 && q==i)
            cout << (n/2)  << endl;
        else if(n%2!=0 && q!=i)
            cout << (n/2)+1 << endl;
        else if(n%2==0 )
            cout << n/2 << endl;
    }
  
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
