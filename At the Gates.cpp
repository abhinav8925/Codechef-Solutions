/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 28th August 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/POPGATES

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define nl "\n"
using namespace std;
int N=1000001;
int mod=1000000007;
vector<int> arr(N,true);
vector<int> prime_num;
vector<int> prime_fact(N,-1);

void sieve()
{
    
    arr[0]=arr[1]=0;
    for(int i=2;i<=sqrt(N);i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i;j<=N;j+=i)
                arr[j]=0;
        }
    }
    
    for(int i=2;i<=N;i++)
    {
        if(arr[i])
            prime_num.push_back(i);
    }
}

void sieve_prime_factor()
{
    
    for(int i=2;i<=N;i++)
    {
        if(prime_fact[i]==-1)
        {
            for(int j=i;j<=N;j+=i)
            {
                // if(prime_fact[j]==-1)
                    prime_fact[j]=i;
            }
        }
    }
    
    int k;
    cin>>k;
    while(k>1)
    {
        cout << prime_fact[k] << " ";
        k=k/prime_fact[k];
    }
}

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
    int i,n,k;
	    cin >> n >> k;
	    vector <char> coins;
	    for(i=0;i<n;i++)
	    {
	        char x;
	        cin >> x;
	        coins.push_back(x);
	    }
	    for(i=0;i<k;i++)
	    {
	        if(coins.at(n-i-1)=='H')
	        {
	            for(int j=0;j<coins.size();j++)
	            {
	                if(coins.at(j) == 'H')
	                    coins.at(j) = 'T';
	                else if(coins.at(j) == 'T')
	                    coins.at(j) = 'H';
	            }
	        }
	        coins.pop_back();
	    }
	    int c=0;
	    for(i=0;i<coins.size();i++)
	    {
	        if(coins.at(i) == 'H')
	            c++;
	    }
	    cout << c << endl;
    
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
