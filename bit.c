#include<stdio.h>
int fibn(int a)
{
   if (a <= 1)
      return a;
   return fibn(a-1) + fibn(a-2);
}
  
int main ()
{
  int a;
  scanf("%d",&a);
  printf("%d\n", fibn(a));
  getchar();
  return 0;
}
