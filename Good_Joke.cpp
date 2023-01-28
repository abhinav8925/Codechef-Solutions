/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 29th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/RRJOKE

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
    int k=0;
    for(int i=1;i<=n;i++)
        {
            int a,b;
            cin>>a>>b;  
            k=k^i;
        }

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
