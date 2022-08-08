// Date - 8th August 2022
// Code by - Abhinav Anand

// problem link
//  https://www.codechef.com/submit/TSORT

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;cin>>a[i],i++);
    sort(a,a+n);
    for(int i=0;i<n;cout <<a[i] << " ",i++);
    cout << endl;
    
}