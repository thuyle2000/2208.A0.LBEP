#include <stdio.h>
#include <stdlib.h>

//chuong trinh kiem tra ky tu nhap co phai la ky tu so ?
// version 2: su dung ham getchar()
int main(){
    system("cls");

    char kt;
    printf(" nhap 1 ky tu bat ky: ");
    // scanf("%c", &kt);
    kt= getchar();

    if(kt >= 48 && kt<= 57){
        printf(" %c la ky tu so. \n", kt);
    }

    printf("\n Finished !\n");
}