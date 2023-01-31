// Date - 20th December 2022
// Code by - Abhinav Anand

// Problem link -> https://www.codechef.com/problems/COVID_19

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
    int row,col;
    cin>>row>>col;
    if(row%2==0)    row=row/2;
    else if(row%2!=0)   row=(row/2)+1;
    if(col%2==0)   col=col/2;
    else if(col%2!=0)   col=(col/2)+1;

	
    cout << row*col << endl;
    
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
