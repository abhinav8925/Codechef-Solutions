/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date ->  4th September 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/LCPESY

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
    
    
     string s1,s2;
	    int c=0;
	    cin>>s1>>s2;
	    map <char,int> m1,m2;
	    for(int i=0;i<s1.size();i++){
	        m1[s1[i]]++;
	    }
	    for(int i=0;i<s2.size();i++){
	       m2[s2[i]]++; 
	    }
	    for(auto i:m1){
	      for(auto j:m2){
	          if(i.first==j.first){
	              c+=min(i.second,j.second);
	          }
	      }
	    }
	cout<<c<<endl;
    
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
