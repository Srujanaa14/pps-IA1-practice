#include<stdio.h>
float input()
{
  float n;
  printf("enter a number=\n");
  scanf("%f",&n);
  return n;
}
float squirt(float n)
{
  float result;
  result=n/2;
  float root=0;
  while(result!=root)
  {
   root=result;
   result=(n/root+root)/2;
  }
  return result;
}
void output( float result)
{
  printf("square root of %0.1f",result);
}
int main()
{
  float n,result;
  n=input();
  result=squirt(n);
  output(result);
  return 0;
}
