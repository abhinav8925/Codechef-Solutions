/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 10th March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/PER_MOD

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
    for(int i=1;i<=n-1;i++)
        cout << i+1 << " ";
    
    cout << 1 << endl;
    
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
