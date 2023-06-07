/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 7th June 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/GOODSET

*/

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
int N=1000001;
#define mod 1000000007
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
    // cin.tie(NULL);
    // cout.precision(7);
    
    int n;
    cin>>n;
    // int ans=1;
    // if(n==1)
    //     cout << 1 << endl;
    // else if(n==2)
    //     cout << 1 << " " << 2 << endl;
    // else if(n==3)
    //     cout << 1 << " " << 2 << " " << 4 << endl;
    // else if(n>=4){
    //     int ans=4;
    //     cout << 1 << " " << 2 << " " << 4 << " ";
    //     for(int i=1;i<=n-3;i++){
    //         ans=ans+3;
    //         cout << ans << " " ;
    //     }
    //     cout << endl;
    // }
    
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        if(i<=3)
        {
            ans=ans*2;
            cout << ans << " ";
        }
        else
        {
            ans+=3;
            cout << ans << " ";
        }
    }
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
