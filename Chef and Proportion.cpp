/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 10th March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CHEFCBA

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
    
    int n=4;
    double a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    sort(a,a+n);
    if((a[3]/a[1]==a[2]/a[0]) || (a[3]/a[0]==a[2]/a[1]) || (a[3]/a[2]==a[1]/a[0]))
        cout << "Possible" << endl;
    else
        cout << "Impossible" << endl;
}

int main() {
	
	solve();
	
	return 0;
}
