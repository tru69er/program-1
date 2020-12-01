#include <stdio.h>

int main(void) {
  double x, n, fact;
  double sum=0.0,a;
  printf("Enter value of x and n\n");
  scanf("%lf %lf", &x, &n);
  for(double i=1.0;i<=n;i++)
  {
    fact=1.0;
    for(double k=1.0;k<=i;k++)
    {
      fact = fact*k;
    }
    a = (i*x)/fact;
    sum = sum + a;
  }
  printf("The sum of the series is : %lf", sum);
  return 0;
}
