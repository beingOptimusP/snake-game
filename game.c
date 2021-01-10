#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int n,a,e=0;
    srand(time(0));
    
    a=rand()%100+1;

    while (e==0)
    {   printf("enter number \n");
        scanf("%d",&n);
        if (n>a)
            printf("ur number is greater\n");
        else if(n<a)
            printf("ur number is smaller\n");
        else if(n==a){
            printf("u found the number\n");
            e=1;
    
        }    
        
    }
    
    
}