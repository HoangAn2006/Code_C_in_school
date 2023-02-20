#include<stdio.h>

int x, a, b, d1, d2, d3 ;
int so_tien_phai_tra; 

int main()
{

scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &d1);
scanf("%d", &d2);
scanf("%d", &d3);
scanf("%d", &x);

if( x <= a)
{
so_tien_phai_tra = x*d1; 
printf("%08d", so_tien_phai_tra );
}
if( a < x && x <= b)
{
so_tien_phai_tra = a*d1 + (x-a)*d2; 
printf("%d", so_tien_phai_tra );
}
if( x > b)
{
so_tien_phai_tra =  a*d1 + (b-a)*d2 + (x-b)*d3; 
printf("%d", so_tien_phai_tra );
}

}