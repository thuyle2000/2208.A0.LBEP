#include <stdio.h>
#include <stdlib.h>

/*
chuong trinh tao 1 mang so nguyen co n-phan tu, tinh va in ra so lon nhat, nho nhat va gia tri binh quan
*/
int main()
{
    system("cls");

    int n;

    while (1 == 1)
    {
        printf(" nhap so phan tu cua mang [5-20] : ");
        scanf("%d", &n);
        if (n >= 5 && n <= 20)
        {
            break;
        }
    }

    // khai bao bien mang a[] chua n so nguyen
    int a[n];

    // vong lap nhap gia tri cho tung phan tu cua mang a[]
    for (int i = 0; i < n; i++)
    {
        printf(" nhap gia tri a[%d]: ", i);
        scanf("%d", &a[i]); // nhap 1 so va luu vo phan tu thu i+1 cua mang a[]
    }

    // in cac phan tu trong mang a[],
    // va tim so lon nhat, nho nhat va tinh tong
    int min = a[0], max = a[0], sum = 0;
    printf("\n >> day so vua nhap: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // in phan tu thu i+1 cua mang a[] ra man hinh

        min = (min < a[i]) ? min : a[i]; // tim so nho hon giua min va a[i]
        max = (max > a[i]) ? max : a[i]; // tim so lon hon giua max va a[i]
        sum += a[i];            // tinh tong (cong don cac a[i] vo bien sum)
    }

    printf("\n >> so nho nhat : %d", min);
    printf("\n >> so lon nhat : %d", max);
    printf("\n >> gia tri binh quan : %.2f", (float)sum/n);
}