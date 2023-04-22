

/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 22nd April 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/GROUPS

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
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1' && s[i+1]!='1')
            cnt++;
    }
    
    cout << cnt << endl;
    
    
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
