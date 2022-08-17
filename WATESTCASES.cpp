// Date -> 17th August 2022
// Code by -> Abhinav Anand

// Problem Link -> https://www.codechef.com/START52D/problems/WATESTCASES


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
  
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)  cin>>a[i];
  string s;
  cin>>s;
  int cnt=0;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    if(s[i]=='0')
      v.push_back(a[i]);
  }
  sort(v.begin(),v.end());
  cout << v[0] << endl;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
      solve();
    }
    return 0;
}

