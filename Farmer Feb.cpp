/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 28th January 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/POTATOES

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
    int sum=a+b;
    for(int i=1;i<2002;i++)
    {
        if(isprime(sum+i)==true)
        {
            cout << i << endl;
            break;
        }
    }
   
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
