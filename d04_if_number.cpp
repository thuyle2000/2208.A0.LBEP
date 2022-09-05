#include <stdio.h>
#include <stdlib.h>

//chuong trinh kiem tra ky tu nhap co phai la ky tu so ?
int main(){
    system("cls");

    char kt;
    printf(" nhap 1 ky tu bat ky: ");
    scanf("%c", &kt);

    if(kt >='0' && kt<='9'){
        printf(" %c la ky tu so. \n", kt);
    }

    printf("\n Finished !\n");
}