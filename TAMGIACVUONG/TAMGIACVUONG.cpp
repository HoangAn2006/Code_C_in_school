#include<stdio.h>
#include<math.h>

int main()
{
int a,b;

scanf("%d%d", &a, &b);

printf("%.02f\n", (float)a*b/2 );
printf("%.02f", sqrt(a*a+b*b));

}