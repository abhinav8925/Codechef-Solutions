// Date - 13th December 2022
// Code by - Abhinav Anand

// Problem link -> https://www.codechef.com/problems/AVG

#include <iostream>
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
    int n,k,v;
    cin>>n>>k>>v;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
    int mean=(((n+k)*v) - sum);
    int check=mean/k;
    if(mean>0 && mean%k==0)
        cout << (mean)/k <<endl;
    else
        cout << -1 << endl;



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
