/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 23rd April 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/C00K0FF

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
    
    vector<int> v(7,0);
    
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="cakewalk")
            v[0]++;
        else if(s=="simple")
            v[1]++;
        else if(s=="easy")
            v[2]++;
        else if(s=="easy-medium")
            v[3]++;
        else if(s=="medium")
            v[4]++;
        else if(s=="medium-hard")
            v[5]++;
        else if(s=="hard")
            v[6]++;
    }
    
    if(v[0]>=1 && v[1]>=1 && v[2]>=1  && (v[3]+v[4])>=1 && (v[5]+v[6])>=1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    
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
