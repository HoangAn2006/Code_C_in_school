/*

Một người cân nặng w(kg)  và cao h(m)  sẽ có chỉ số  BMI =w/h^2. 
Bảng dưới đây là bảng đánh giá sức khoẻ cho người Châu Á theo chỉ số . 
Hãy viết chương trình đánh giá sức khoẻ của một người dựa vào giá trị  của họ.

  BMI < 18.5 -->Thiếu cân
  18.5 <= BMI <= 22.9 --> Bình thường
  BMI > 22.9 --> Thừa cân
Input:
Dòng đầu ghi w là số cân nặng ở đơn vị kg .
Dòng thứ hai ghi h là chiều cao ở đơn vị m . Các giá trị đều là số thực dương.
Output:
Gồm một dòng ghi “Thieu can”, “Binh thuong” hoặc “Thua can” tuỳ theo giá trị  của người đó.

*/
#include<stdio.h>

float weight, high; 
float BMI;

int main()
{

scanf("%f", &weight);
scanf("%f", &high);
BMI=(weight)/(high*high);
//printf("%f\n", BMI);

if(18.5<BMI && BMI <22.9)
{
printf("Binh thuong");
}
 if(BMI>22.9)
{
printf("Thua can");
}
 if(BMI<18.5)
{
printf("Thieu can");
}
}