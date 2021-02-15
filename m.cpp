#include<bits/stdc++.h>
using namespace std;
 

int main()
{
    long long int n,a[100000],p=0,s;
    cin>>n;
    for (int i = 0; i < n; i++)
        cin>>a[i];
    
    sort(a,a+n);

    for (int i = 0; i < n; i=i+s)
    {
        s=1;
        for (int j = i+1; j < n; j++)
        {
            if(a[i]==a[j])
                ++s;
            else    
                break;
        }
        p+=s/2;
     }
    
    cout<<p<<endl;

 return 0;
}