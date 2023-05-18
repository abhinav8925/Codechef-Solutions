#include<bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cin>>n;
    int l;
    cin>> l;
    int a[2560]={0};
    for(int i=0;i<2560;i++)
    {
        int k=i;
        k=k>>1;
        if((i)%2==0)
            a[i]=a[k];
        else if((i)%2!=0)
            a[i]=a[k]+1;
            
    }
    
    
    
    cout << a[l] << " ";
    cout << endl;
    
}
