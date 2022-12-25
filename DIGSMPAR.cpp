// Date - 25th December 2022
// Code by - Abhinav Anand

// Problem link -> https://www.codechef.com/problems/DIGSMPAR?tab=statement

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
bool sum(int n)
{
    int ans=0;
    while(n!=0)
    {
        ans+=n%10;
        n/=10;
    }
    if(ans%2==0)
        return true;
    else
        return false;
}

void solve()
{
    ll x;
    cin>>x;
    ll k=x+1;
    if(sum(x) == sum(k))
        cout << k+1 << endl;
    else
        cout << k << endl;

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
