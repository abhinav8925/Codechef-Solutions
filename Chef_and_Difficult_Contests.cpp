
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 22nd January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CHFTIRED

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
    int a,b;
    cin>>a>>b;
    cout << "YES" << endl;
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
