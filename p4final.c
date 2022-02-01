#include<stdio.h>
int input()
{
  int n;
printf("enter the size of the arar:\n");
scanf("%d",&n);
return n;
}
int aray(int n,int a[n])
{
  int i;
  for(i=0;i<n;i++)
  {
    printf("enter the number:\n");
    scanf("%d",&a[i]);
  }

}
int add(int n,int a[10])
{
  int sum=0,i;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}
int output(int sum)
{
  printf("sum of the number is %d",sum);
}
int main()
{
  int a[10],sum,n;
  n=input();
  aray(n,a);
  sum=add(n,a);
  output(sum);
  return 0;
}