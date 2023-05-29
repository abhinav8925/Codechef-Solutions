/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 29th May 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/SUBTASK?tab=statement

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int N=1000001;
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
    
    int n,m,k;
    cin>>n>>m>>k;
    int a[n];
    bool ans=true;
    int cnt=0;
    for(int i=0;i<n;i++){   
        cin>>a[i];
        if(a[i]==0)
            cnt++;
    }
    
    for(int i=0;i<m;i++)
        {
            if(a[i]==0)
            {
                ans=false;
                break;
            }
        }
    if(!ans && cnt>0)
        cout << 0 << endl;
    else if(ans && cnt>0)
        cout << k << endl;
    else
        cout << 100 << endl;
    
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
