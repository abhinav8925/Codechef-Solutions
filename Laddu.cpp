/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 27th June 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/LADDU

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
    // ios_base::sync_with_stdio(0);
    // cout.precision(7);
    
    ll ans=0;
    int n;
    cin>>n;
    string s;
    cin>>s;
    while(n--){
        string a;
        cin>>a;
        if(a=="CONTEST_WON")  {
            int b;
            cin>>b;
            if(b<=20)
                ans+=300+(20-b);
            else
                ans+=300;
        }
        if(a=="BUG_FOUND"){
            int b;
            cin>>b;
            ans+=b;
        }
        if(a=="TOP_CONTRIBUTOR")
            ans+=300;
        if (a=="CONTEST_HOSTED")
            ans+=50;
        
    }
    
    if(s=="INDIAN")
        cout << ans/200 << endl;
    else if(s=="NON_INDIAN")
        cout << ans/400 << endl;
    
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
