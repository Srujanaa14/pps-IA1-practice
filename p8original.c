#include<stdio.h>
typedef struct _complex
{
  float real;
  float imaginary;
}Complex;
int get_n()
{
  int n;
  printf("Enter the number of complex_ numbers:");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
  Complex c;
  printf("Enter the real part:");
  scanf("%f",&c.real);
  printf("Enter the imaginary part:");
  scanf("%f",&c.imaginary);
  return c;
}
void input_n_complex(int n, Complex c[n])
{
  for(int i=0;i<n;i++)
  {
    c[i]=input_complex();
  }
}
Complex add(Complex a, Complex b)
{
  Complex sum;
  sum.real=a.real+b.real;
  sum.imaginary=a.imaginary+b.imaginary;
  return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
  Complex result;
  result.real=0;
  result.imaginary=0;
  for(int i=0;i<n;i++)
  {
    result=add(result,c[i]);
  }
  return result;
}
void output(int n, Complex c[n], Complex result)
{
  if(n==1)
  {
    printf("%0.2f + %0.2fi is %0.2f + %0.2fi",c[0].real,c[0].imaginary,result.real,result.imaginary);
  }
  else
  {
    for(int i=0;i<n;i++)
    {
      printf("%0.2f + %0.2fi\n",c[i].real,c[i].imaginary);
    }
    printf(" is %0.2f + %0.2fi\n",result.real,result.imaginary);
  }
}
int main()
{
  int n=get_n();
  Complex c[n],result;
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}