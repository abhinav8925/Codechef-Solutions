/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 1st March 2023
  Code by - Abhinav Anand

  Problem link ->https://www.codechef.com/problems/DISTOPPSUMS

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
    for(int i=n;i>=1;i--)
        if(i%2==0)
            cout << i << " ";
    for(int i=1;i<=n;i++)
        if(i%2!=0)
            cout << i << " ";
    
    cout << endl;
    
    
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
