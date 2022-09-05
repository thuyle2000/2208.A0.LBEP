#include <stdio.h>
#include <stdlib.h>
// chuong trinh nhap 2 so n1, n2. Tinh tong cac so le giua n1 va n2 va in ket qua ra man hinh

int main()
{
    system("cls");

    int n1, n2;
    printf(" nhap so thu 1: ");
    scanf("%d", &n1);
    printf(" nhap so thu 2: ");
    scanf("%d", &n2);

    // hoan chuyen gia tri cua n1 va n2 neu n1 > n2
    if (n1 > n2)
    {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    printf("\n\n >> Tong cac so le giua %d va %d: \n", n1, n2);
    int sum = 0;
    // tinh tong cac so le giua n1 va n2;
    int start = (n1 % 2 == 0) ? n1 + 1 : n1;
    for (; start <= n2; start += 2)
    {
        sum += start;
        printf(" + %d ", start);
    }

    printf(" = %d \n", sum);
}