#include<stdio.h>
#include<math.h>

int main()
{
int x, y ;
scanf("%d%d", &x, &y );
if( ((y*100)/(float)x) > 10.00  )
{
printf("Arabica duoc mua.\n");
printf("He so gia ban: 2");
}
else
{
printf("Arabica mat mua.\n");
printf("He so gia ban: 3");
}
}