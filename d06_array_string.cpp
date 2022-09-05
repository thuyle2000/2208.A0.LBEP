#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// chuong trinh luu tru danh sach ho ten  cua n-sinh vien
int main()
{
    system("cls");

    int n;
    while (1==1)
    {
        printf(" nhap so luong sinh vien [3-10]: ");
        scanf("%d", &n);
        if(n>=3 && n<=10){
            break;
        }
    }

    fflush(stdin);

    char tensv[n][31]; //khai bao mang chuoi (string) gom n-phantu, moi chuoi co the chua toi da 30 ky tu (char)

    //vong lap nhap ten cua n-sinh vien
    for (int i = 0; i < n; i++)
    {
        printf(" >> ten ho ten cua sv thu %d: ", i+1);
        gets(tensv[i]);
    }
    
    //vong lap in ra bang ds ho ten cua n-sinh vien
    printf("\n Danh sach sinh vien \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %2d. %s \n", i+1, tensv[i]);
    }
}