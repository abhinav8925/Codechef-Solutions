/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 28th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/UTMOPR

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
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum+=v[i];        
    }
    int kk=(sum+1);
    k--;
    while(k--)
    {
        kk=kk+kk;
    }
    if(kk%2==0)
        cout << "even" <<endl;
    else
        cout << "odd" <<endl;
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
