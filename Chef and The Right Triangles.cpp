/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 29th August 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/RIGHTRI

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
    
    int cnt=0;
    int n;
    cin>>n;
    while(n--){
        int a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        int k1= pow(abs(a-c),2)  + pow(abs(b-d),2);
        int k2= pow(abs(a-e),2) +  pow(abs(b-f),2);
        int k3= pow(abs(c-e),2) +  pow(abs(d-f),2);
        
        
        if(k1==k2+k3 || k2==k3+k1 || k3==k1+k2)
            cnt++;
    
    
    }
    cout << cnt << endl;
}

int main() {
	
	//sieve_prime_factor();
	// sieve();
// 	int t;
// 	cin>>t;
	
// 	while(t--)
// 	{
// 		solve();
// 	}
    solve();
	return 0;
}
