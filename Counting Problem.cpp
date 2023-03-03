/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 3rd March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/COUNTP

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

bool checkparity(int n)
{
    if(n%2==0)
        return true;
    else
        return false;
}

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    int e=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            e++;
        else if(a[i]%2!=0)
            o++;
    }
    
    if((o%2==0 && o!=0))
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
