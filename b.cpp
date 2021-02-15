#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        long long int m,a[100000],x=0,y,sum=0;
        int p=0;
        cin>>m;
        for(int j=0;j<m;j++)
        {
                cin>>a[j];
                sum+=a[j];
        }

        
        for(int j=0;j<m;j++)
        {
            y=a[j];
            if((2*x)==(sum-y))
            {
                ++p;
                break;
            }
            else
                x+=y;
        }

        if(p!=0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
    
        
 return 0;
}