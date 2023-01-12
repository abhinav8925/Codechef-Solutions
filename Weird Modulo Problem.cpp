// ***** !!!!! JAI SHREE KRISHNA !!!!! *****

// Date - 12th January 2023
// Code by - Abhinav Anand

// Problem link -> https://www.codechef.com/problems/EXUNA


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
        cin>>a[i];
    
    sort(a,a+n);
    
    int ans=a[0];
    for(int i=1;i<n;i++)
    {
        ans=ans%a[i];
    }
    cout << ans << endl;
    
    
    
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
