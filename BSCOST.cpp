// Date - 24th September 2022
// Code by - Abhinav Anand

// Problem link -> https://www.codechef.com/problems/BSCOST

#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    int n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    int cntz=0;
    int cnto=0;
    for(int i=0;i<n;i++)
        {
            if(s[i]=='0')
                cntz++;
            else if(s[i]=='1')
                cnto++;
        }
    sort(s.begin(),s.end());
    if(x>y && cntz>=1 && cnto>=1)
    {
        cout << y << endl;
    }
    else if(y>x && cntz>=1 && cnto>=1)
    {
        cout << x << endl;
    }
    else if(x==y && cntz>=1 && cnto>=1)
    {
        cout << y << endl;
    }
    else if(cntz<1 || cnto<1)
    {
        cout << 0 << endl;
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
