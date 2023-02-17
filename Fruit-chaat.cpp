#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int x,y;
    cin>>x>>y;
    cout<< min(x/2,y/1) << endl;
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
