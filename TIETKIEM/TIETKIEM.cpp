#include<stdio.h>
#include<math.h>

int main()
{
int a ;
scanf("%d", &a );
for(int i = 1; i<=10; i++  )
{
a=(float)a+(a*5/100);
printf("%.03f\n", a);

}

}