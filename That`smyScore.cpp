// Date - 12th January 2022
// Code by - Abhinav Anand

// Problem link -> https://www.codechef.com/problems/WATSCORE

// ***** !!!!! JAI SHREE KRISHNA !!!!! *****

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
    vector<int> v(11,0);
    for(int i=0;i<n;i++)
    {
        int p,s;
        cin>>p>>s;
        v[p]=max(s,v[p]);
    }
    int cnt=0;
    for(int i=0;i<9;i++)
        cnt+=v[i];
    
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
