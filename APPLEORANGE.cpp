
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 25th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/APPLEORANGE

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
    ll n,m;
    cin>>n>>m;
    cout << __gcd(n,m) << endl;
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
