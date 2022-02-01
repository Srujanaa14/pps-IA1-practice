#include<stdio.h>
typedef struct complex
{
  float real;
  float imaginary;
}complex;

complex input()
{
  complex c;
  printf("enter the real value:\n");
  scanf("%f",&c.real);
  printf("enter the imaginary value:\n");
  scanf("%f",&c.imaginary);
  return c;
}
complex add(complex a,complex b)
{
  complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
void output( complex a,complex b,complex c)
{
  printf("sum of the number is %0.1f+%0.1fi and %0.1f+%0.1fi is %0.1f+%0.1fi\n",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
}
int main()
{
complex c1,c2,c;
c1=input();
c2=input();
c=add(c1,c2);
output(c1,c2,c);
}