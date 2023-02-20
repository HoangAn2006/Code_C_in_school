/*
Cho ngày tháng năm ở định dạng DD/MM/YYYY được nhập vào từ bàn phím. Hãy In ra theo cấu trúc: "Ngay DD thang MM nam YYYY" -- xem thêm ví dụ minh hoạ.

Input
-Một dòng ghi ngày tháng theo đúng định dạng DD/MM/YYYY.

Output
-In ra một dòng ghi thông báo về ngày, tháng, năm theo mẫu.


*/

#include<stdio.h>

int ngay;
int thang;
int nam;

int main()
{

scanf("%d/%d/%d", &ngay, &thang, &nam);
printf("Ngay %02d thang %02d nam %04d", ngay, thang, nam);

}