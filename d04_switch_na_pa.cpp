#include <stdio.h>
#include <stdlib.h>
//chuong trinh kiem tra ky tu nhap la nguyen am hay phu am ?

int main(){
    system("cls");

    printf(" CHUONG TRINH Kiem tra Nguyen Am, Phu Am \n\n");
    char kt;

    printf(" nhap 1 ky tu bat ky: ");
    kt = getchar();

    if ((kt >='a' && kt<='z') || (kt >='A' && kt<='Z')){
        //day la ky tu chu tu a-z: tien hanh phan loai na va pa
        switch (kt)
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf(" >> %c la nguyen am.", kt);
            break;
        
        default:
            printf(" >> %c la phu am.", kt);
            break;
        }
    }
    else{
        printf("\n >> %c ko phai la ky tu chu ! \n", kt);
    }


}