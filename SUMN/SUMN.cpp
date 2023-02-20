#include<stdio.h>

int main()
{
int i;
scanf("%d", &i);
int tong= 0;
for(int a=i ; a>=0; a--)
{
    //printf("%d\n", a);
 tong = tong + a; 
    if ( a ==0 )
        {
            printf("%d\n", tong);
        }
}
}

