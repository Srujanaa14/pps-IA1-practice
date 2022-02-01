#include<stdio.h>
int input(int *a,int *b)
{
printf("enter the two number:\n");
scanf("%d%d",a,b);
}
int add(int a,int b,int *sum)
{
  *sum=a+b;
}
int output(int sum)
{
  printf("sum of a&b is %d",sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(sum);
  return 0;
}
