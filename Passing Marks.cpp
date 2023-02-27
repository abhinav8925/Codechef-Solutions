/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 27th February 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CUTOFF 

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
    
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int ans=0;
    sort(a,a+n);
    cout <<a[n-x]-1 << endl;

    
    
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
