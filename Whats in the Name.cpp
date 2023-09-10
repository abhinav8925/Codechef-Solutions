/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 10th September 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/NITIKA

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
    
    string s,v,w;
	    getline(cin,s);
	    for(int i=0;i<s.length();i++)
	    {
	        for(int j=i;j<s.length();j++)
	        {
	            if(s[j]==' '){
	                v.clear();
	                if(s[i]>='a')s[i]=s[i]+'A'-'a';
	                w.push_back(s[i]);
	                w.push_back('.');
	                w.push_back(' ');
	                i=j;
	                break;
	            }
	            else{
	                v.push_back(s[j]);
	            }
	            if(j==s.length()-1)i=j;
	        }
	    }
	    if(v[0]>='a')
	    v[0]=v[0]+'A'-'a';
	    for(int i=1;i<v.length();i++)
	    {
	        if(v[i]<='Z')
	        v[i]=v[i]+'a'-'A';
	    }
	    w=w+v;
	    cout<<w<<endl;
    
    
    
}

int main() {
	
	//sieve_prime_factor();
	// sieve();
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		solve();
	}
	return 0;
}
