/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 16th March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/DWNLD

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
    int n,k,amt=0,cnt=0;
    cin>>n>>k;
    int amt2=0;
    while(n--)
    {
        int t,d;
        cin>>t>>d;
        if(k>0)
            {
                if(k>t)
                {
                    k=k-t;
                    amt2=amt2+(t*d);
                }
                else if(k<=t)
                {
                    k=t-k;
                    amt2=amt2+(abs(k-t)*d);
                    k=0;
                }
            }
       
        amt=(t*d)+amt;
    }
    
    cout << amt -amt2 << endl;
    
    
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
