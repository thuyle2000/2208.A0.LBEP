#include <stdio.h>
#include <stdlib.h>

//chuong trinh quan ly 1 thu vien sach.
//moi quyen sach bao gom maso, tua, don gia

//dinh nghia cau truc BOOK, mo ta 1 quyen sach
struct BOOK
{
    char id[11], title[41];
    int price;
};

void fn_book(); //khai bao prototype cua ham fn_book()
int main(){
    system("cls");
    fn_book();
}

//ham quan ly thu vien sach
void fn_book(){
    int n;
    while(1==1){
        printf(" >> nhap so luong sach muon quan ly [3-10]: ");
        scanf("%d", &n);
        if(n>=3 && n<=10){
            break;
        }
    } // nhap xong so luong sach muon quan ly

    //khai bao mang ds[] chua n-quyen sach (kieu struct BOOK)
    struct BOOK ds[n];

    //vong lap nhap thong tin chi tiet cua n-quyen sach
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\n - nhap sach thu %d: \n", i+1);
        printf("   id: "); gets(ds[i].id); 
        printf("   tua: "); gets(ds[i].title);
        printf("   don gia: "); scanf("%d", &ds[i].price);
    }

    //in ra danh muc cac dau sach trong mang ds[]
    printf("\n\n Danh muc Sach \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %2d. %-4s %-20s %4d \n",i+1, ds[i].id, ds[i].title, ds[i].price);
    }   
}