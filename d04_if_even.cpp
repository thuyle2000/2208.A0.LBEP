#include <stdio.h>
#include <stdlib.h>

// chuong trinh kiem tra so chan
int main()
{
    system("cls");

    int n;
    printf("nhap 1 so nguyen bat ky: ");
    scanf("%d", &n);

    if(n%2 == 0){
        printf(" %d la so chan ! \n", n);
    }

    printf("\n Finished !\n");
}
