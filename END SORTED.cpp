/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****

  Date - 2nd February  2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/ENDSORTED

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
    int minpos=n+1,mn=INT_MAX;
    int maxpos=-98,mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            minpos=i+1;
        else if(a[i]==n)
            maxpos=i+1;
    }
    
    
    if(a[0]==mn && a[n-1]==mx)
        cout << 0 << endl;
    else if(minpos>maxpos && a[0]!=1 && a[n-1]!=n)
        cout << n-maxpos+abs(1-minpos)-1 << endl;
    else
        cout << abs(1-minpos)+abs(n-maxpos) << endl;

}

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();    
    }
	
	return 0;
}
