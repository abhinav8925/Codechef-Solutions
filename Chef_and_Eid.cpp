/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 26th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/EID

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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int mn=INT_MAX;
    for(int i=1;i<n-1;i++)
    { 
        mn=min(min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1])),mn); 
        
    }
    if(n==2) 
        cout << abs(a[0]-a[1]) << endl;
    else if(n>2)
        cout << mn  << endl;
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
