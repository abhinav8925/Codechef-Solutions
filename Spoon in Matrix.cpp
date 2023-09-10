/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 6th September 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/SPOON?tab=statement

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
    
    int r,c;
	    cin>>r>>c;
	    vector<char> v;
	    for(int j=0; j<r; j++)
	    {
	        for(int k=0;k<c; k++)
	        {
	            char ch;
	            cin>>ch;
	            
	            v.push_back(tolower(ch));
	        }
	    }
	    int flag=0;
	    for(int j=0; j<(r*c)-4; j++)
	    {
	        if(v[j]=='s' && v[j+1]=='p' && v[j+2]=='o' && v[j+3]=='o' && v[j+4]=='n')
	        {
	            flag=1;
	            cout<<"There is a spoon!"<<endl;
	            break;
	        }
	        else if(v[j]=='s' && v[c+j]=='p' && v[2*c + j]=='o' && v[3*c +j]=='o' && v[4*c +j]=='n')
	        {
	            flag=1;
	            cout<<"There is a spoon!"<<endl;
	            break;
	        }
	        else
	        {
	            continue;
	        }
	    }
	    if(flag==0)
	    {
	        cout<<"There is indeed no spoon!"<<endl;
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
