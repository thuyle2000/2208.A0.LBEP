#include <stdio.h>
#include <stdlib.h>

// bai tap homework - lap trinh dieu kien - trang 145/01/session 8
int main()
{
    system("cls");

    int x, y;
    printf("nhap vao gia tri cua x: ");
    scanf("%d", &x);

    printf("nhap vao gia tri cua y: ");
    scanf("%d", &y);

    //kiem tra gia tri cua x co hop le ko ?
    if(x<2000 || x>3000 ){
        printf(" x la gia tri hop le ! \n");
    }
    else{
        printf(" >> x (%d) la gia tri KHONG hop le ! (<2000 hoac >3000) \n", x);
    }

    //kiem tra gia tri cua bien y
    if(y>=100 && y<=300){
        printf(" y la gia tri hop le ! \n");
    }
    else{
        printf(" >> gia tri cua y (%d) KHONG hop le ! [100-300] \n", y);
    }
    
}
