
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 1st May 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/DIVBYI

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
    if(n%2!=0)
    {
        int o=0,e=1;
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
                cout << ((n/2)+1)+(o++) << " ";
            else
                cout << ((n/2)+1)-(e++) << " ";
        }
    }
    else
    {
        int e=1,o=0;
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0)
                cout << (n/2) -(o++) << " ";
            else
                cout << (n/2) + (e++) << " ";
        }
    }
    cout << endl;
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
