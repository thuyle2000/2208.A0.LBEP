#include <stdio.h>
#include <stdlib.h>

// chuong trinh kiem tra nam nhuan
int main()
{
    system("cls");

    int year;
    printf(" Chuong trinh kiem tra nam nhuan \n\n");

    printf(">> nhap nam muon kiem tra: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        // day la nam co kha nang la nam nhuan
        if (year % 100 != 0)
        {
            printf(" >> %d la nam nhuan. \n", year);
        }
        else if (year % 400 == 0)
        {
            printf(" >> %d la nam nhuan the ky. \n", year);
        }
        else
        {
            printf(" >> %d la nam the ky !", year);
        }
    }
    else
    {
        printf(" >> %d la nam binh thuong, co 365 ngay. \n", year);
    }
}