#include <stdio.h>
int main()
{   int x,y;
  printf("enter value for x : ");
  scanf("%d",&x);
  printf("enter value for y : ");
  scanf("%d",&y);int a=1;
  for(int i=1;i<=y;i++)
  {
      a=a*x;
  }
  printf("x^y = %d",a);
    return 0;
}