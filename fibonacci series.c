#include <stdio.h>
int main()
{ int a=0,b=1,c;
printf("%d %d ",a,b);
    while(c<101)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
   return 0;
}