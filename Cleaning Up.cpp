/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 16th September 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CLEANUP

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
    
    int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++)
            cin >> arr[i];
       
        sort(arr, arr + m);
        
        vector<int> chef, assi;
       
        int i = 1, idx = 0, btn = 0;
        while (i <= n) 
        {
            if (!btn && (arr[idx] != i)) 
            {
                chef.push_back(i); 
                btn = 1;           
            }
            else if (btn && (arr[idx] != i)) 
            {
                assi.push_back(i);
                btn = 0;
            }
            else 
                idx++;
            i++;
        }
        
        if (!(chef.size()))
            cout << "-1";
        for (int i = 0; i < chef.size() + assi.size(); i++)
        {
            if (i < chef.size())
                cout << chef[i] << ' ';
            else
            {
                if (!(i - chef.size()))
                    cout << endl;
                cout << assi[i - chef.size()] << ' ';
            }
        }
        if (!(assi.size()))
            cout << "\n-1";
        cout << endl;
    
    
    
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
	// solve();
	return 0;
}
