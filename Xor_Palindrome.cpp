/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 22nd January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/XOR_PAL

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
    
    int cnt=0;
    for(int i=0,j=n-1;i<=j;i++,j--)
    {
        if(s[i]!=s[j])
             cnt++;
    }
    if(cnt%2==0)
        cout << cnt/2 << endl;
    else
        cout << (cnt/2)+1 << endl;
    
    
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
