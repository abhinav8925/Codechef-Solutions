/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 3rd  March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/QTOO_2523

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
    map<char,int> m;
    for(int i=0;i<n;i++)
        m[s[i]]++;
    
    int mx=0;
    for(auto &it:m)
        mx=max(mx,it.second);
        
    
    if(mx==1)
        cout << -1 << endl;
    else
        cout << n-2 << endl;
        
    
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
