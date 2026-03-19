
#include <stdio.h>

int main()
{    int n;
    printf("enter no. of elements for an array\n");
    scanf("%d",&n);
    int a[n]; int t;
    printf("enter elements for an array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
      printf("sorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
        
    }
return 0;
}