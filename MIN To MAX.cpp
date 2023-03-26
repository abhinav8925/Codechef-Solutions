/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 26th March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/OPMIN

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
    int a[n];
    int mn=963;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mn=min(mn,a[i]);
    }
    int  nt=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)
            nt++;
    }
    if(n==1 || n==nt)
        cout << 0 << endl;
    else if(nt!=n)
        cout << n-nt << endl;
   
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
