#include <stdio.h>
#include <stdlib.h>


//khai bao ham square() - [khai bao prototype]
int squarer(int);

// demo ham co gia tri tra ve
int main()
{
    system("cls");
    int n;
    printf(" nhap vao 1 so nguyen: ");
    scanf("%d", &n);
    printf(" >> binh phuong cua %d: %d \n", n, squarer(n));
}

/*
    ham squarer tra ve binh phuong cua 1 so bat ky
    ten ham : squarer()
    tham so : int
    kieu ham : int
*/
int squarer(int x)
{
    return x * x;
}