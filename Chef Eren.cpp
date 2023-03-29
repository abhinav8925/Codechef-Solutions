
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 29th March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CHEFEREN

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
    
    int n,a,b;
    cin>>n>>a>>b;
    if(n%2==0)
        cout << ((n/2))*a + (n/2)*b << endl;
    else
        cout << ((n/2)+1)*b + (n/2)*a << endl;
    
    
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
