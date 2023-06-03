/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 3rd June 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/START92D/problems/DOTIFYPLAY

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
    ios_base::sync_with_stdio(0);
    // cout.precision(7);
    
    
    int n,k,l;
    cin>>n>>k>>l;
    
    int p=n;
    vector<int> v1,v2;
    while(p--)
    {
        int x1,x2;
        cin>>x1>>x2;
        
        v1.push_back(x1);
        v2.push_back(x2);
    }
    
    int cnts=0,tm=0;
    
    vector<int> v3;
    
    for(int i=0;i<n;i++)
    {
        if(v2[i]==l)
        {
            cnts++;
            v3.push_back(v1[i]);
        }
    }
    
    sort(v3.begin(),v3.end());
    
    int cnt=0;
    
    
    
    for(int i=v3.size()-1;i>=0;i--){
        if(cnt>=k)
            break;
        tm+=v3[i];
        cnt++;
    }
        
    
    if(cnts>=k)
        cout << tm;
    else
        cout << -1;
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
	return 0;
}
