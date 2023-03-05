/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 5th March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/ODDEVENBS

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
    int z=0,o=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            z++;
        else
            o++;
    }
    if(z>(n/2)+1 || o>(n/2)+1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    
    
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
