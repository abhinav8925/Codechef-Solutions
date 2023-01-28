/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 29th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/INFERNO

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
    int cnt=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        if(a[i]%x==0)
            cnt+=(a[i]/x);
        else if(a[i]<x)
            cnt+=1;
        else if(a[i]%x!=0 && a[i]>x)
            cnt+=((a[i]/x)+1);
    }
    cout << min(cnt,mx) << endl;
      
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
