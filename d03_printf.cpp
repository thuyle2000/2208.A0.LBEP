#include <stdio.h>
#include <stdlib.h>

// chuong trinh demo cach su dung cac bo tu (modifier) trong ham printf()
int main()
{
    system("cls");

    // khai bao bien chuoi ky tu chua ten san pham
    char tensp1[] = "coca cola";
    char tensp2[] = "cake chocolate (size L)";

    // khai bao bien so thuc chua don gia
    float dg1 = 12.69, dg2 = 149.999;

    // khai bao bien so nguyen chua so luong
    int sl1 = 3, sl2 = 10;

    // in hoa don
    printf("\t Hoa don ban hang \n");
    printf("%15s %10s %11s %13s \n", "Ten san pham", "so luong", "don gia", "thanh tien");

    printf("%-15.15s %10d %11.2f %13.2f \n", tensp1, sl1, dg1, sl1 * dg1);
    printf("%-15.15s %10d %11.2f %13.2f \n", tensp2, sl2, dg2, sl2 * dg2);
}