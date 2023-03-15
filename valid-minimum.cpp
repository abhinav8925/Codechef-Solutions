/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 16th March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/VALIDMIN

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
    int a[3];
    for(int i=0;i<3;i++)
        cin>>a[i];
    
    sort(a,a+3);
    
    if(a[0]==a[1])
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
