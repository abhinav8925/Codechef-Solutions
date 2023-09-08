/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 8th September 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/MSTEP

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
    
    int n;
        cin>>n;
        map<int,pair<int,int>> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                int x;
                scanf("%d",&x);
                mp[x]={i,j};
            }
        }
        int count=0;
        for(auto it:mp)
        {
            int key=it.first;
            if(key==(n*n))
                break;
            pair<int,int> a=mp[key];
            int x1=a.first,y1=a.second;
            pair<int,int> b=mp[key+1];
            int x2=b.first,y2=b.second;
            count+=(abs(x1-x2)+abs(y1-y2));
        }
        cout<<count<<endl;
    
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
