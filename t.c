#include <stdio.h>
#include <time.h>
int comparetime(time_t time1,time_t time2){
 return difftime(time1,time2) > 0.0 ? 1 : -1; 
} 
char *strptime(const char *buf, const char *format, struct tm *tm);
int main(void){
    time_t t1, t2;
    struct tm *timeptr,tm1, tm2;
    char* time1 = "Mar 21 11:51:20 AM";
    char* time2 = "Mar 21 10:20:05 AM";

    //(1) convert `String to tm`:  
    if(strptime(time1, "%b %d %r",&tm1) == NULL)
            printf("\nstrptime failed\n");          
    if(strptime(time2, "%b %d %r",&tm2) == NULL)
            printf("\nstrptime failed\n");

    //(2)   convert `tm to time_t`:    
    t1 = mktime(&tm1);
    t2 = mktime(&tm2);  

     printf("\n t1 > t2 : %d", comparetime(t1, t2));
     printf("\n t2 > t1 : %d", comparetime(t2, t1));
     printf("\n");
     return 1;
}