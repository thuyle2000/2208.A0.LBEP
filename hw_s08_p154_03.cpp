#include <stdio.h>
#include <stdlib.h>

// bai tap homework - page154/03/session8 - su dung bieu thuc tam phan ?:
int main()
{
    int a, b, c;

    system("cls");

    printf(" nhap so thu 1: ");
    scanf("%d", &a);
    printf(" nhap so thu 2: ");
    scanf("%d", &b);
    printf(" nhap so thu 3: ");
    scanf("%d", &c);

    int max = (a>b) ? a : b;
    max = (max>c) ? max : c;

    printf(" => So lon nhat [%d, %d, %d] : %d \n", a,b,c, max);

}