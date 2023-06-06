
/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 7th June 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/CRDGAME3

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
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.precision(7);
    
    ll c,r;
    cin>>c>>r;
    
    if(c<10 && r<10)
        cout << 1 << " " << 1 << endl;
    else{
        
        int ans1=0,ans2=0;
        if(c%9==0)
            ans1=(c/9);
        else
            ans1=(c/9)+1;
        
        if(r%9==0)
            ans2=(r/9);
        else
            ans2=(r/9)+1;
        

        if(min(ans1,ans2)==ans1)
            cout << 0 << " " << ans1 << endl;
        else
            cout << 1 << " " << ans2 << endl;
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
