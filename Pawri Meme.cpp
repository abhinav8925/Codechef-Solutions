/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 30th April 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/PAWRI

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
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y')
        {
            s[i+2]='w';
            s[i+3]='r';
            s[i+4]='i';
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
