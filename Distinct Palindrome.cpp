/*
  ***** !!!!! JAI SHREE KRISHNA !!!!! *****
  
  Date -> 13th September 2023
  Code by - Abhinav Anand

  Problem link -> https://www.codechef.com/problems/DISPAL

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
    
    int n, x;
  cin >> n >> x;
  if (n == 1)
  {
    cout << "a\n";
    return;
  }
  if (n < (2 * x) - 1)
  {
    cout << "-1\n";
    return;
  }
  string ans = "";
  int i = 0;
  for (char a = 'a'; i < x; i++, a++)
    ans += a;
  string last = ans;
  reverse(last.begin(), last.end());
  n -= (2 * x);
  if (n < 0)
  {
    cout << ans;
    for (int i = x - 2; i >= 0; i--)
      cout << ans[i];
    cout << endl;
    return;
  }
  while (n--)
    ans += 'a';
  ans += last;
  cout << ans << endl;
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
