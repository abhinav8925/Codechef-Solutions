/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 25th August 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/HELPLIRA

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
    
    int x;
	cin>>x;
	long double ans1=INT_MIN, ans2=INT_MAX;
	int first=0,second=0;
	for(int i=1;i<=x;i++){
	    int x1,y1,x2,y2,x3,y3;
	    cin>>x1>>y1>>x2>>y2>>x3>>y3;
	  long double area = abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))*0.5;
	  if(area>=ans1){
	      ans1=area;
	      second =i;
	  }
	  if(area<=ans2){
	      ans2=area;
	      first =i;
	  }
	  
	}
	cout<<first<<" "<<second<<endl;
    
    
    
    
    
}

int main() {
	
	//sieve_prime_factor();
	// sieve();
	/*int t;
	cin>>t;
	while(t--)
	{
		solve();
	}*/
	solve();
	return 0;
}
