/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 22nd April 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/BIT2A

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
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        for(int j=i;j<n;j++)
        {
            if(a[i]<a[j])
                cnt++;
        }
        v.push_back(cnt);
    }
    
    for(int i=0;i<v.size();i++)
        cout << v[i] << " ";
    
    cout << endl;
    
    
    
    
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
