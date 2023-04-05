
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 6th April 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/MAX_BIN

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
    
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    if(s[0]=='0')
    {
        for(int i=n;i<n+k-1;i++)
            s+='0';
        
        s[0]='1';
    }
    else if(s[0]=='1')
    {
        for(int i=n;i<(n+k);i++)
        {
            s+='0';
        }
    }
    
    cout << s << endl;
    
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
