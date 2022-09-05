#include <stdio.h>
#include <stdlib.h>
int main()
{
    //ham xoa man hinh
    system("cls");

    //khai bao 2 bien bo nho [a], [b] kieu so nguyen
    int a = 10, b = 6;
    int c = a + b;

    printf(" %d + %d = %d \n", a, b, c);
    printf(" %d - %d = %d \n", a, b, a - b);
    printf(" %d * %d = %d \n", a, b, a * b);
    printf(" %d / %d = %d \n", a, b, a / b);
    printf(" %d %% %d = %d \n", a, b, a % b);
}