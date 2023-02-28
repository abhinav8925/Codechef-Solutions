/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 28th February 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/START76D/problems/ZEROSTRING

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
    string s;
    cin>>s;
    int cz=0,co=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            co++;
        else if(s[i]=='0')
            cz++;
    }
    if(cz==n)
        cout << 0 << endl;
    else if(co==n || co==1)
        cout << 1 << endl;
    else if(co==cz)
        cout << cz << endl;
    else if(co>1)
        cout << min((min(co,cz)+1),co) << endl;
        
    
    
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
