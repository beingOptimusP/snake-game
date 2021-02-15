#include<iostream>

#include<string.h>

using namespace std;

string print24(string str)
{
    // Get hours
    string s;
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
            for (int i = 0; i < 5; i++)
                s[i]=str[i];
            return s;
        }
        else
        {
            for (int i = 0; i < 5; i++)
                s[i]=str[i];
            return s;
        }
    }
 
    // If time is in "PM"
    else
    {
        if (hh == 12)
        {
            str[0]='1';
            str[1]='2';
            for (int i = 0; i < 5; i++)
                s[i]=str[i];
            return s;
        }
        else
        {
            hh = hh + 12;
        
            string str1 = to_string(hh);
            str[0]=str1[0];
            str[1]=str1[1];
            for (int i = 0; i < 5; i++)
                s[i]=str[i];
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
        getchar();
        int m;
        string a[2],p;
        getline(cin,p);
        p=print24(p);
        cin>>m;
        long long int c,b[100000];
        for (int j = 0; j < m; j++)
        {
            getchar();
            getline(cin,a[0]);
            getline(cin,a[1]);
            a[0]=print24(a[0]);
            a[1]=print24(a[1]);
            if(p>=a[0] && p=<a[1])
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