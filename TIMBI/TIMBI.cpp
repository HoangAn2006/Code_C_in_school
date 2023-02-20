/*
Có hai hộp đựng các viên bi. Hộp thứ nhất  A chứa N viên bi; hộp thứ hai B có M viên bi. Thực hiện thao tác sau: lấy ra khỏi hộp A x viên bi; 
lấy ra khỏi hộp B số bi bằng số bi còn lại trong hộp A. Hỏi số lượng viên bi còn lại trong hộp B sau khi thực hiện thao tác trên.

Input:
Gồm 3 dòng, mỗi dòng ghi một số lần lượt là N,M,x (Dữ liệu đảm bảo thao tác thực hiện được, không có trường hợp nào bị thiếu bi)

Output:
Một dòng ghi một số nguyên là số lượng bi còn lại ở hộp .
*/

#include<stdio.h>

int N;
int M;
int x;
int so_con_lai_trong_hop_B;

int main()
{

//printf("Hop A chua: ");
scanf("%d",&N );

//printf("Hop B chua: ");
scanf("%d",&M );

//printf("Lay ra khoi hop A: ");
scanf("%d",&x );

so_con_lai_trong_hop_B = M - (N - x) ;
printf("%d", so_con_lai_trong_hop_B );

}