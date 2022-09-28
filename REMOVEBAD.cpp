// Date -> 28th September 2022
// Code By -> Abhinav Anand

//Problem Link -> https://www.codechef.com/START58D/problems/REMOVEBAD

#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    int ma=0;
    for(int i=0;i<n;i++)
    {
        ma=max(ma,a[i]);
    }
    int k =ma+1;
    int f[k]={0};
    for(int i=0;i<n;i++)
    {
        f[a[i]]++;    
    }
    sort(f,f+k);
    cout << n-  f[k-1] << endl;

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
