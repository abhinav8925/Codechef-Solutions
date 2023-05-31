/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date - 31st May 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/COUPON2

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
    
    int d,c;
    cin>>d>>c;
    int sum1=0,sum2=0;
    int a1,a2,a3,b1,b2,b3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3;
    
    sum1=a1+a2+a3;
    sum2=b1+b2+b3;
    
    
    
    if(sum1>=150 && sum2>=150)
    {
        if((sum1+sum2+d+d)>sum1+sum2+c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else if(min(sum1,sum2)<150 && max(sum1,sum2)>=150)
    {
        if(sum1+sum2+c+d <(sum1+sum2+d+d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else 
            cout << "NO" << endl;
    
    
    
    
    
    
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
