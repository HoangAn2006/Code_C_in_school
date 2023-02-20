// CHƯA LÀM XONG


#include<stdio.h>

int main()
{
long long n;
scanf("%lld", &n);
long long tong= 0;
for(long long a=3 ; a<=n; a=a+3)
{
tong = tong + a; 
}
printf("%lld\n", tong);
}

