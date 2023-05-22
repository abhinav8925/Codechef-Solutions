/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 23rd May 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CFMM?tab=submissions

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
    int n;
    cin>>n;
    
    string ans="";
    while(n--)
    {
        string s;
        cin>>s;
        ans+=s;
    }
    map<char,int> m;
    for(int i=0;i<ans.size();i++)
        m[ans[i]]++;
    
    vector<int> v(6);
    for(auto &it:m)
    {
      if(it.first=='c')
            v[0]+=(it.second)/2;
      else if(it.first=='e')
            v[1]+=(it.second)/2;
      else if(it.first=='o')
            v[2]+=it.second;
      else if(it.first=='d')
            v[3]+=it.second;
      else if(it.first=='h')
            v[4]+=it.second;
      else if(it.first=='f')
            v[5]+=it.second;
    }
    int mn=INT_MAX;
    for(int i=0;i<6;i++)
    {
        
        mn=min(mn,v[i]);
    }
    
    
    cout << mn << endl;
  
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
