// Date -> 26th August 2022
// Code By -> Abhinav Anand

//Problem Link -> https://www.codechef.com/START53D/problems/WGHTS

#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int w,x,y,z;
    cin>>w>>x>>y>>z;
    int k=x+y;
    int j=x+z;
    int l=y+z;
    int s=x+y+z;
    if(w==x || w==y || w==z)
      cout << "YES" << endl;
    else if(k==w || j==w || l==w || s==w)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
      
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