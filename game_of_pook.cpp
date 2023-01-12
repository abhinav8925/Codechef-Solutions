// ***** !!!!! JAI SHREE KRISHNA !!!!! *****


// Date -> 12th January 2022
// Code By -> Abhinav Anand

// Problem Link -> https://www.codechef.com/problems/POOK


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
    if(n==1)    cout << n <<endl;
    else if(n==2)   cout << 1 << endl;
    else if(n==3)   cout << 2 << endl;
    else    cout << n <<endl;
    
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
