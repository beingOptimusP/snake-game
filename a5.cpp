#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    c=n;
    for (int i = 1; i < n; i++)
    {   
        c=c/2;
        c*=3; 
    }
    cout<<c;
    

 return 0;
}