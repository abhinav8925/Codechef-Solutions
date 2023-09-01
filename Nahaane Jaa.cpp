/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date ->  1st September 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/EQSARRAY

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
    ll n,k;
    cin>>n>>k;
    
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
        
    // bool ans=true;
    if(n==1 && a[0]==k){
        cout << "YES" << nl;
        return;
    }
    
    vector<int> v;
    for(ll i=0;i<n;i++){
        if(a[i]==k){
           v.push_back(i);
        }
    }
    
    if(v.size()!=0){
        if(v[0]!=n-1)   
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
    else
        cout << "NO" << nl;
    
    
    
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
