#include<stdio.h>

int main()
{
int i;
scanf("%d", &i);
long tong= 0;
for(int a=i ; a>=0; a--)
{
 tong = tong + a; 
    if ( a ==0 )
        {
            printf("%ld\n", tong);
        }
}
}
