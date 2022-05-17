#include<stdio.h>
#include<stdlib.h>
#define min(x,y) ((x<y)? x : y)
/*so ngay nghi tren sao hoa = 2 *(so tuan) + so ngay nghi co the các ngày dư còn lại
muốn lấy max số ngày nghỉ ,cho 1 tuần bắt đầu từ bằng 2 ngày nghỉ
muốn lấy min ,cho 1 tuần kết thúc bằng 2 ngày nghỉ
*/
int main(int ac,char **av){
    if(ac != 2)
    exit(printf("Nhap so ngay trong nam\n")!=0);
    
    int n = atoi(av[1]); // số ngày trong năm trên sao hỏa
    if (n <=0 )
        exit(printf("so ngay trong 1 nam la so duong\n") !=0)
    int x = 2 * (n % 7);
    int nghi_min = x + (n %7 == 6);
    int nghi_max = x + min(n % 7, 2);

    printf("%d %d \n",nghi_min,nghi_max);
}
