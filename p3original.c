#include<stdio.h>
int input()
{
  int n;
  printf("entrer the range:\n");
  scanf("%d",&n);
  return n;
}
int add(int n)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+i;
  }
  return sum;
}
int output(int sum)
{
  printf("sum of the number is %d",sum);
}
int main()
{
  int n,sum;
  n=input();
  sum=add(n);
  output(sum);
  return 0;
}