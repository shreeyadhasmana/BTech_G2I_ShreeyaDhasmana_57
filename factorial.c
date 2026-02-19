#include <stdio.h>
int main()
{ int a;
  printf("enter a number for its factorial\n");
  scanf("%d",&a);
  int fact=1;
  for(int i=1;i<=a;i++)
  {
      fact=fact*i;
  }
  printf("factorial of given num is %d",fact);
   return 0;
}