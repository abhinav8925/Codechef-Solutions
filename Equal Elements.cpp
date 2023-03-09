/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 8th March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/EQUALELE

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
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    vector<int> v;
    for(auto &it:m)
    {
        if(it.second>=1)
            v.push_back(it.second);
    }
    sort(v.begin(),v.end());
    
    int k=v[v.size()-1];
    
    cout << n-k << endl;
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
