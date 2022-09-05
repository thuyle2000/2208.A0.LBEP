#include <stdio.h>
#include <stdlib.h>

//chuong trinh kiem tra so chan
int main(){
    int num;
    printf(" >> nhap 1 so nguyen bat ky: ");
    scanf("%d", &num);

    int r = num % 2;

    if(r==0){
        printf(" >> %d la so chan ! \n", num);
    }

    printf(" FINISHED !");

}