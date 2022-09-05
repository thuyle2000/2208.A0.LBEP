#include <stdio.h>
#include <stdlib.h>

//chuong trinh tinh luong cuoi thang
int main(){

    system("cls");

    int luongCB, thuong;
    char bacLuong;

    printf(" nhap luong CB: ");
    scanf("%d", &luongCB);

    fflush(stdin);
    printf(" nhap bac luong [a/b/c]: ");
    scanf("%c", &bacLuong);

    //tinh thuong
    if(bacLuong=='a' || bacLuong=='A'){
        thuong = 100;
    }
    else if(bacLuong =='b' || bacLuong == 'B'){
        thuong =  400;
    }
    else if(bacLuong == 'c' || bacLuong == 'C'){
        thuong = 1000;
    }
    else {
        thuong = 0;
    }

    //in bang luong
    printf("\nBang Luong cuoi thang \n");
    printf("Bac luong: %8c \n", bacLuong);
    printf("Luong CB : %8d\n", luongCB);
    printf("Thuong   : %8d\n", thuong);
    printf(">> Luong : %8d\n", luongCB+ thuong);

}