/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 26th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/GAMEOFPILES1

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
    int ce=0,co=0,cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
           cnt++;
        if(a[i]%2==0)
            ce++;
        else if(a[i]%2!=0)
            co++;
    }
    if(co%2!=0 || cnt>0)
        cout << "CHEF" << endl;
    else
        cout << "CHEFINA" << endl;
    
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
