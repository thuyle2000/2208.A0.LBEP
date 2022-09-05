#include <stdio.h>
#include <stdlib.h>

// demo cach su dung ham nhap du lieu: scanf()
int main()
{
    system("cls");

    // khai bao bien chuoi chua ho va ten
    char lastname[30];
    char firstname[10];

    // khai bao bien so nguyen, chua tuoi
    int age;

    printf(">> vui long nhap ten cua ban: ");
    // scanf("%[^\n]s", firstname);
    gets(firstname);
    fflush(stdin); // xoa bo dem ban phim

    printf(">> vui long nhap ho va ten lot cua ban: ");
    // scanf("%[^\n]s", lastname);
    gets(lastname);
    fflush(stdin); // xoa bo dem ban phim
    
    printf(">> vui long nhap tuoi cua ban: ");
    scanf("%d", &age);

    printf("\n Thong tin cua ban: \n");
    printf(" ho va ten : %s %s\n", lastname, firstname);
    printf(" tuoi: %d \n", age);
}