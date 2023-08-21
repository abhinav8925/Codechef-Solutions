/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 21st August 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/BIGSALE

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
    // cout << fixed << setprecision(9)
    
    int n;
    cin>>n;
    double ans=0.000000000;
    while(n--){
        double a,b,c;
        cin>>a>>b>>c;
        
        double inc_amt = (a*c)/100;
        double inc_price = a+inc_amt;
        
        double dcs_amt = (inc_price*c)/100;
        double dcs_price = inc_price-dcs_amt;
        
        double dedn = a-dcs_price;
        dedn*=b;
        ans+=dedn;
    }
    
    cout << fixed << setprecision(7) << ans << endl;
    
    
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
