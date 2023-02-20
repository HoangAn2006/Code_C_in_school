#include<stdio.h>

int n ;

int main()
{
scanf("%d", &n);
if( n%400==0 || n%4==0&&n!=100  )
{
    printf("Nam nhuan");
}
else
{
printf("Khong la nam nhuan");
}

}