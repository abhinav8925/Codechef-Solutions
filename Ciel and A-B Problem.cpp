
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 16th March 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CIELAB

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
    if((a-b)%10==9)
        cout << a-b-1 << endl;
    else
        cout << a-b+1 << endl;
    
    
}

int main() {
	
	
    solve();

	return 0;
}
