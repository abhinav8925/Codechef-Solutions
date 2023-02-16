/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 16th February 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/BTRYHLTH

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
    
    int x;
    cin>>x;
    if(x>=80)   
    cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
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
