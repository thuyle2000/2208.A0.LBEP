#include <stdio.h>
#include <stdlib.h>

// chuong trinh demo xep thu tu mang so nguyen
int main()
{

    system("cls");

    // khai bao mang a[] chua cac so nguyen
    int a[] = {12, 9, 100, 24, 65, 43, 7, -9, 18};

    // in day so trong mang a[] ra man hinh
    printf(" >> Day so : \n");
    for (int i = 0; i < 9; i++)
    {
        printf("%3d ", a[i]);
    }

    // sap xep day so trong mang a[] theo thu tu tang dan
    int tam;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (a[i] > a[j])
            {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }

    // in day so trong mang a[] sau khi duoc xep thu tu tang dan, ra man hinh
    printf("\n >> Day so sau khi xep thu tu : \n");
    for (int i = 0; i < 9; i++)
    {
        printf("%3d ", a[i]);
    }
}