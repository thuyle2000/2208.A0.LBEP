#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// chuong trinh demo truyen tham so theo phuong phap dia chi tham chieu
int ptb2(int a, int b, int c, double *x1, double *x2);
int main()
{
    int a, b, c;
    double x1, x2;
    system("cls");
    printf(" >> CT giai phuong trinh bac 2: ax2 + bx +c =0 << \n");
    printf(" nhap he so a: ");
    scanf("%d", &a);
    printf(" nhap he so b: ");
    scanf("%d", &b);
    printf(" nhap he so c: ");
    scanf("%d", &c);

    int kq = ptb2(a,b,c, &x1, &x2);
    if(kq==-1){
        printf(" => PT vo nghiem ! \n");
    }
    else if(kq==0){
        printf(" => PT co nghiem kep : x1 = x2 = %.2f \n", x1);
    }
    else{
        printf(" => PT co 2 nghiem : x1 = %2.f, x2 = %.2f \n", x1, x2);
    }
}

// ham giai phuong trinh bac 2, dang thuc ax2+bx+c=0
/*
    ten ham : ptb2()
    tham so : int a, int b, int c, double x1, double x2
    kieu ham : int [-1: PT vo nghiem, 0: PT co nghiem kep, 1: PT co 2 nghiem ]
*/
int ptb2(int a, int b, int c, double *x1, double *x2)
{
    double delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        return -1; // pt vo nghiem !
    }
    else if (delta == 0)
    {
        *x1 = *x2 = -b / (2 * a);
        return 0; // pt co nghiem kep !
    }
    else
    {
        *x1 = (-b - sqrt(delta)) / (2 * a);
        *x2 = (-b + sqrt(delta)) / (2 * a);
        return 1; // pt co 2 nghiem phan biet.
    }
}
