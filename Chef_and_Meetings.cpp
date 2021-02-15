#include<bits/stdc++.h>
using namespace std;

string print24(string str)
{
    // Get hours
    int h1 = (int)str[1] - '0';
    int h2 = (int)str[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
 
    // If time is in "AM"
    if (str[6] == 'A')
    {
        if (hh == 12)
        {
            str[0]='0';
            str[1]='0';
            return str;
        }
        else
        {
            return str;
        }
    }
 
    // If time is in "PM"
    else
    {
        if (hh == 12)
        {
            str[0]='1';
            str[1]='2';
            return str;
        }
        else
        {
            hh = hh + 12;
            string str1 = to_string(hh);
            str[0]=str1[0];
            str[1]=str1[1];
            return str;
        }
    }
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string p="";
        char c;
        for(int i=0;i<7;i++)
        {
            cin>>c;
            p.push_back(c);
        }
        p=print24(p);
        int n,j=0;
        long long int b[100000];
        cin>>n;
        while (n--)
        {
            string l="",r="";
            char x;
            for(int i=0;i<7;i++)
            {
                cin>>x;
                p.push_back(x);
            }
            for(int i=0;i<7;i++)
            {
                cin>>x;
                p.push_back(x);
            }
            l=print24(l);
            r=print24(r);
            if(p>=l && p<=r)
                b[j]=1;
            else
                b[j]=0;

            ++j;
        }
        for (int j = 0; j < n; j++)
            cout<<b[j];
        cout<<endl;
        
    }
    

 return 0;
}