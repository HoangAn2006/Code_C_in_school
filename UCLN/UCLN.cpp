#include<stdio.h>
int main()
{
    //khai bao a, b, tg
    int a, b, tg;
    //nhap a
    //printf("nhap a:");
    scanf("%d",&a);
    //nhap b
    //printf("nhap b:");
    scanf("%d",&b);
    while(b!=0)
    {
        tg = a % b;
        a = b;
        b = tg;
    }
    //in UCLN ra man hinh
    printf("Uoc chung lon nhat: %d",a);
}