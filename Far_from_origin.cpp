// ***** !!!!! JAI SHREE KRISHNA !!!!! *****

// Date - 14th January 2023
// Code by - Abhinav Anand

// Problem link -> https://www.codechef.com/JAN231D/problems/FARFROMO


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
    ll x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    
    x1=abs(x1);
    y1=abs(y1);
    x2=abs(x2);
    y2=abs(y2);

    double alex = sqrt(pow((x1),2) + pow((y1),2));
    double bob =  sqrt(pow((x2),2) + pow((y2),2));
    
    
    
    
    if(alex==bob)
        cout << "EQUAL" << endl;
    else if(alex>bob)
        cout << "ALEX" << endl;
    else if(bob>alex)
        cout << "BOB" << endl;
    
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
