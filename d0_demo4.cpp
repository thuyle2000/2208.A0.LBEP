#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*
    ham xoa man hinh
    ================
    */
    system("cls");

    printf(" *** MY CASIO *** \n");
    printf(" ================ \n");
    //khai bao 3 bien bo nho [a], [b], [c] kieu so nguyen
    int a , b, c;
    
    printf(" >> input a: ");
    scanf("%d", &a);

    printf(" >> input b: ");
    scanf("%d", &b);

    c = a+b;

    printf(" %d + %d = %d \n", a, b, c);
    printf(" %d - %d = %d \n", a, b, a - b);
    printf(" %d * %d = %d \n", a, b, a * b);
    printf(" %d / %d = %d \n", a, b, a / b);
    printf(" %d %% %d = %d \n", a, b, a % b);
}