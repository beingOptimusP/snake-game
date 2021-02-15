#include<bits/stdc++.h>
using namespace std;

string c24(int hh,int min,string t)
{
    string s,b,c;
    if(t=="AM")
    {
        if(hh==12)
        {
           b=to_string(min);
           s[0]='0';
           s[1]='0';
           s[2]=':';
           s[3]=b[0];
           s[4]=b[1];
           return s; 
        }
        else
        {
            c=to_string(hh);
            b=to_string(min);
            s[0]=c[0];
            s[1]=c[1];
            s[2]=':';
            s[3]=b[0];
            s[4]=b[1];
            return s;
        }
    }
    else
    {
        if(hh==12)
        {
            c=to_string(hh);
            b=to_string(min);
            s[0]=c[0];
            s[1]=c[1];
            s[2]=':';
            s[3]=b[0];
            s[4]=b[1];
            return s;
        }
        else
        {
            hh=hh+12;
            c=to_string(hh);
            b=to_string(min);
            s[0]=c[0];
            s[1]=c[1];
            s[2]=':';
            s[3]=b[0];
            s[4]=b[1];
            return s;
        }
    }
}
int main()
{
    int n;
    cin>>n;


    for (int i = 0; i < n; i++)
    {
        long long int m,b[100000];
        int hh,min;
        string t="",p;
        scanf("%d:%d",&hh,&min);
        cin>>t;
        getchar();
        p=c24(hh,min,t);
        cin>>m;
        for (int j = 0; j < m; j++)
        {
            int hh1[2],min1[2];
            string t1="",t2="",l,r;
            scanf("%d:%d",&hh1[0],&min1[0]);
            cin>>t1;
            scanf("%d:%d",&hh1[1],&min1[1]);
            cin>>t2;
            l=c24(hh1[0],min1[0],t1);
            r=c24(hh1[1],min1[1],t2);
            if(p>=l&&p<=r)
                b[j]=1;
            else
                b[j]=0;
        }
        for (int j = 0; j < m; j++)
            cout<<b[j];

        cout<<endl;

    }
 return 0;
}