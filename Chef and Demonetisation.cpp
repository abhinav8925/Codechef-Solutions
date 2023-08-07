/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 7th August 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CHFMOT18

*/

#include <iostream> 
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
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
    ll s,n;
    cin>>s>>n;
    
    if(s<=n){
        if(s==1 || s%2==0)
            cout << 1 << endl;
        else if(s%2!=0)
            cout << 2 << endl;
    }
    else{
        ll ans=s/n;
        ll rem=s%n;
        
        if(rem==0)
            cout << ans << endl;
        else if(rem==1 || rem%2==0)
            cout << ans+1 << endl;
        else if(rem%2!=0)
            cout << ans+ 2 << endl;
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
