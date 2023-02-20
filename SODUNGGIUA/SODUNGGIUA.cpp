#include<stdio.h>

float a,b,c;

int main()
{
  
  scanf("%f%f%f",&a, &b, &c);
  
  if( (a<=b && a>=c) || (a<=c && a>=b)    )
  {
  printf("%.1f",a);
  }
  if( (b<=a && b>=c) || (b<=c && b>=a)      )
  {
  printf("%.1f",b);
  }
  else if(  (c<=a && c>=b) || (c<=b && c>=a)   )
  {
  printf("%.1f",c);
  }
  return 0;
}