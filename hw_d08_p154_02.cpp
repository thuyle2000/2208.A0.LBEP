#include <stdio.h>
#include <stdlib.h>

// bai tap homework - page 154/02/session 8 , su dung cau truc switch case
int main()
{
    system("cls");

    char lang;

    printf(">> nhap vao 1 ky tu bat ky (ma cua NNLT): ");
    scanf("%c", &lang);

    switch (lang)
    {
    case 'a':
    case 'A':
        printf(">> ADA \n");
        break;
    case 'b':
    case 'B':
        printf(">> Basic \n");
        break;
    case 'c':
    case 'C':
        printf(">> COBOL \n");
        break;
    case 'd':
    case 'D':
        printf(">> dBASE III \n");
        break;
    case 'f':
    case 'F':
        printf(">> Fortran \n");
        break;
    case 'p':
    case 'P':
        printf(">> Pascal \n");
        break;
    case 'v':
    case 'V':
        printf(">> Visual C++ \n");
        break;
    default:
        printf(">> Unknown Language !");
        break;
    }
}