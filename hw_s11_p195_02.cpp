#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// chuong trinh dem so nguyen am trong 1 chuoi ky tu
int main()
{
    system("cls");
    printf("Chuong Trinh Dem Nguyen Am. \n");

    char text[81]; // khai bao chuoi text co the chua toi da 80 ky tu
    printf(" >> nhap chuoi bat ky : ");
    gets(text);

    // khai bao 1 chuoi chua cac nguyen am
    char vowels[] = "AEIOUaeiou";

    // khai bao bien count chua so luong na trong chuoi text
    int count = 0;

    // khai bien n chua tong so ky tu trong chuoi text
    int n = strlen(text);

    // vong lap doc tung ky tu trong chuoi text, kiem tra co phai la na ko ?
    for (int i = 0; i < n; i++)
    {
        if (strchr(vowels, text[i]))
        {
            count++;
            printf(" %c ", text[i]);
        }
    }

    printf("\n\n >> Tim thay %d nguyen am trong chuoi [%s] \n", count, text);
}