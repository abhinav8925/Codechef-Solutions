/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 3rd  September 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/SPELLBOB?tab=statement

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;
int N=1000001;
int mod=1000000007;




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
    // ios_base::sync_with_stdio(0);
    // cout.precision(7);
    
    string s1;
	    cin>>s1;
	    string s2;
	    cin>>s2;
         if((s1[0]=='b'||s2[0]=='b')&&(s1[1]=='o'||s2[1]=='o')&&(s1[2]=='b'||s2[2]=='b')){
	        cout<<"yes"<<endl;
	    }
	    else  if((s1[0]=='o'||s2[0]=='o')&&(s1[1]=='b'||s2[1]=='b')&&(s1[2]=='b'||s2[2]=='b')){
	        cout<<"yes"<<endl;
	    }
	    else if((s1[0]=='b'||s2[0]=='b')&&(s1[1]=='b'||s2[1]=='b')&&(s1[2]=='o'||s2[2]=='o')){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
    
}

int main() {
	
	//sieve_prime_factor();
	// sieve();
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
