#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100];
    cin>>n;
    for (int i = 0; i < n; i++)
        a[i]=1*(rand()%100);

    sort(a,a+n);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
 return 0;
}