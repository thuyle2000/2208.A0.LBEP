#include <stdio.h>
#include <stdlib.h>

//chuong demo toan tu comma trong vong lap FOR
int main(){
    system("cls");

    printf(" DEMO TOAN TU COMMA (,) \n");
    printf(" >> nhap 1 so nguyen bat ky : ");
    int n;
    scanf("%d", &n);

    //ap dung toan tu dau phay (comma) trong vong FOR
    for (int i = 1, j=n; i <=n; i++, j--)
    {
        printf(" i = %2d, j = %2d => ", i, j);
        printf(" %2d + %2d = %3d \n", i, j, i+j);
    }
}