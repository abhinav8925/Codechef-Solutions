/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 22nd January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/NONADJFLIP

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
    int cnt=0, co=0,cz=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
            cz++;
        else if(s[i]=='1')
            co++; 
        if(s[i]=='1' && s[i+1]=='1')
        {
            cnt++;
            i++;
        }
    }
    if(co==1 && n==1)
        cout << 1 << endl;
    else if(co==n && n>1)
        cout << 2 << endl;
    else if(cz==n)
        cout << 0 << endl;
    else if(cnt==0)
        cout << 1 << endl;
    else
        cout << 2 << endl;
    
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
