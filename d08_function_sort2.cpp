#include <stdio.h>
#include <stdlib.h>

//ham in n-phan tu (so nguyen) trong mang ds[] ra man hinh
void fn_print(int ds[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%3d ", ds[i]);
    }
}

// chuong trinh demo xep thu tu mang so nguyen, theo thu tu tang dan, giam dan
int main()
{
    system("cls");

    // khai bao mang a[] chua cac so nguyen
    int a[] = {12, 9, 100, 24, 65, 43, 7, -9, 18};

    // in day so trong mang a[] ra man hinh
    printf(" >> Day so : \n");
    // for (int i = 0; i < 9; i++)
    // {
    //     printf("%3d ", a[i]);
    // }
    fn_print(a, 9);

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
    printf("\n\n >> Day so sau khi xep thu tu tang : \n");
    // for (int i = 0; i < 9; i++)
    // {
    //     printf("%3d ", a[i]);
    // }
    fn_print(a, 9);

    // sap xep day so trong mang a[] theo thu tu giam dan
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (a[i] < a[j])
            {
                tam = a[i];
                a[i] = a[j];
                a[j] = tam;
            }
        }
    }

    // in day so trong mang a[] sau khi duoc xep thu tu giam dan, ra man hinh
    printf("\n\n >> Day so sau khi xep thu tu giam : \n");
    // for (int i = 0; i < 9; i++)
    // {
    //     printf("%3d ", a[i]);
    // }
    fn_print(a, 9);
}

