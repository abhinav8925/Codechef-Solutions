
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 1st May 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/THREEBOX?tab=ide

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
    int d;
    cin>>d;
    int cnt=1;
    
    for(int i=1;i<3;i++)
    {
        a[i]+=a[i-1];
        if(a[i]<=d)
            cnt=cnt;
        else
            cnt++;
    }
    
    cout << cnt << endl;
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
