#include <stdio.h>
#include <stdlib.h>

//chuong trinh demo cach dinh nghia & lam viec voi kieu du lieu struct

//dinh nghia kieu du lieu [BOOK] bao gom id, tua, dongia
struct BOOK
{
    char id[15];
    char tuaSach[41];
    int donGia;
};

int main(){
    system("cls");
    
    //tao 2 bien b1, b2 co kieu cau truc [BOOK]
    struct BOOK b1, b2;

    //nhap du lieu cho quyen sach thu 1, [b1]
    printf(" - nhap thong tin sach thu 1: \n");
    printf("   id : "); gets(b1.id);
    printf("   tua sach : "); gets(b1.tuaSach);
    printf("   don gia : "); scanf("%d", &b1.donGia);
    fflush(stdin);

    //nhap du lieu cho quyen sach thu 2, [b2]
    printf(" - nhap thong tin sach thu 2: \n");
    printf("   id : "); gets(b2.id);
    printf("   tua sach : "); gets(b2.tuaSach);
    printf("   don gia : "); scanf("%d", &b2.donGia);  

    // in thong tin cua 2 quyen sach b1 va b2
    printf("\n  Danh muc sach \n");
    printf(" %s, %s, %d \n", b1.id, b1.tuaSach, b1.donGia);
    printf(" %s, %s, %d \n", b2.id, b2.tuaSach, b2.donGia);  
}

