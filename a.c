#include<stdio.h>
int main(){
        long long int n,a[1000000],p,b[1000000],c;
        scanf("%d",&n);
        scanf("%d",&p);
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        
        c=p;
        
        for(int i=1;p>n;i++)
            p=p-n*i;

        for (int i = 0; i < n; i++)
        {
                if(i-p>=0)
                        b[i-p]=a[i];
                else
                        b[i-p+n]=a[i];
        }
        
        if(p<0)
        {
            printf("Error Value !!!");
            return 0;
        }
        
        printf("Array elements after  clockwise rotating '%d' times is  : ",c);
        for (int i = 0; i < n; i++)
                printf("%d ",b[i]);
        
        

        
}