// Date -> 24th August 2022
// Code By -> Abhinav Anand

// Problem Link -> https://www.codechef.com/START53D/problems/ODDPAIRS

#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin>>n;
  
    if(n%2!=0)
        cout << 2*((n/2)+1)*(n/2)<< endl;
    else if(n%2==0)
        cout << (n*n)/2 << endl;
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