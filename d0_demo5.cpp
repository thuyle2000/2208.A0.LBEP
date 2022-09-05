#include <stdio.h>
#include <stdlib.h>
int main()
{
    // xoa man hinh
    system("cls");

    printf(" >> Giai phuong trinh bac 1: ax+b=0 \n\n");
    int a, b;

    printf(" nhap he so a: ");
    scanf("%d", &a);
    printf(" nhap he so b: ");
    scanf("%d", &b);

    if (a == 0) {
        if (b == 0) {
            printf(" >> PT co vo so nghiem !!! \n");
        }
        else {
            printf(" >> PT vo nghiem !!! \n");
        }
    }
    else {
        printf("\n >> PT %dx + %d = 0 ", a,b);
        printf("\n    co nghiem x = %f \n", -(float)b/a);
    }
}
