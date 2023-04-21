
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 21st April 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/FIFTYPE

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
    if(n==50)
        cout << 0 << endl;
    else if(n<50)
    {
        if(n%2==0)
            cout << (50-n)/2 << endl;
        else
            cout << ((50-n)/2)+3 << endl;
    }
    else if(n>50)
    {
        if((n-50)%3==0)
            cout << (n-50)/3 << endl;
        else    
            cout << (n-50)/3 + ((n-50)%3)*2 <<endl;
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
