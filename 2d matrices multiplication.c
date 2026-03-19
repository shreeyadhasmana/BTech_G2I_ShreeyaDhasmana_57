
#include <stdio.h>

int main()
{   int i,j,k;
    int a[3][3],b[3][3],c[3][3];
    printf("enter elements of 1st array:\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           scanf("%d",&a[i][j]);
       }
    }
     printf("enter elements of 2nd array:\n");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           scanf("%d",&b[i][j]);
       }
    }
     printf(" 1st array:");
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
       {
           for(k=0;k<3;k++)
           {
               c[i][j]+=a[i][k]*b[k][j];
               
           }
       }
    }
     printf("1st array:");
    for(i=0;i<3;i++)
    { printf("\n");
       for(j=0;j<3;j++)
       {
           printf("%d ",a[i][j]);
       }
       
    }
    printf("\n2nd array:");
    for(i=0;i<3;i++)
    { printf("\n");
       for(j=0;j<3;j++)
       {
           printf("%d ",b[i][j]);
       }
    
    }
    printf("\nmultiplied array:");
    for(i=0;i<3;i++)
    { printf("\n");
       for(j=0;j<3;j++)
       {
           printf("%d ",c[i][j]);
       }
      
    }
    
    
    
    return 0;
}