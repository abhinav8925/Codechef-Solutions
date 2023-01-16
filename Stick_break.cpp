/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 16th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/STICKBREAK

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
    ll k,l;
    cin>>k>>l;
    
    if(k==l)
        cout << 0 << endl;
    else if(k%l==0)
        cout << 0 << endl;
    else
        cout << 1 << endl;
    
    
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
