#include<stdio.h>
#include<math.h>
int input()
{
  int n;
  printf("enter the numbers:\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a,int b,int c)
{
  
  if(a>b && a>c)
  return a;

  else if(b>a && b>c)
    return b;

  else 
  return c;


}
int output(int large)
{
  printf("the biggest number is %d",large);
}
int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  output(large);
  return 0;
}