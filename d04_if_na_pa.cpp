#include <stdio.h>
#include <stdlib.h>
// chuong trinh kiem tra ky tu nhap la nguyen am hay phu am ?

int main()
{
    system("cls");

    printf(" CHUONG TRINH Kiem tra Nguyen Am, Phu Am \n\n");
    char kt;

    printf(" nhap 1 ky tu bat ky: ");
    kt = getchar();

    if ((kt >= 'a' && kt <= 'z') || (kt >= 'A' && kt <= 'Z'))
    {
        // day la ky tu chu tu a-z: tien hanh phan loai na va pa
        if (kt == 'a' || kt == 'A' || kt == 'e' || kt == 'E' || kt == 'i' || kt == 'I' || kt == 'o' || kt == 'O' || kt == 'u' || kt == 'U')
        {
            printf(" >> %c la nguyen am.", kt);
        }
        else
        {
            printf(" >> %c la phu am.", kt);
        }
    }
    else
    {
        printf("\n >> %c ko phai la ky tu chu ! \n", kt);
    }
}