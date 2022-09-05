#include <stdio.h>
#include <stdlib.h>

// chuong trinh nhap n, tinh va in tra tong cua n-so nguyen dau tien
int main()
{
    system("cls");
    printf(" CHUONG TRINH TINH TONG CUA N-SO NGUYEN DAU TIEN \n\n");

    int n=0;
    do
    {
        printf(" nhap N [1-20]: ");
        scanf("%d", &n);
        if(n>=1 && n<=20){
            break;  //so dung => ket thuc vong lap nhap n
        }
    } while (1==1);

    int sum = 0; // bien chua gia tri tong cua N-so nguyen dau tien

    // vong lap in ra cac so nguyen duoc cong don vo bien sum
    for (int i = 1; i <= n; i++)
    {
        printf(" + %d ", i);
        sum += i; // sum = sum + i
    }

    printf(" = %d \n", sum);
}