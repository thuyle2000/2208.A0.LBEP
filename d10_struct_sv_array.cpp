#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//chuong trinh quan ly danh sach sinh vien (su dung cau truc long nhau)

//dinh nghi cau truc DATE, bao gom ngay-thang-nam
struct  DATE
{
    int dd, mm, yy;
};

//dinh nghia cau truc sinh vien [STUDENT], bao gom ma so [id], ho ten [name], ngay thang nam sinh (cau truc DATE), diem ket qua thi [mark] 
struct STUDENT
{
    char id[11];
    char name[31];
    struct DATE birthday; 
    int mark;  
};

//dat them ten moi cho [struct STUDENT] => [SINHVIEN] 
typedef struct STUDENT SINHVIEN;


void fn_Students();

int main(){
    system("cls");

    fn_Students();
}



//ham quan ly danh sach sinh vien
void fn_Students(){
    int n;
    while(1==1){
        printf(" nhap so luong sinh vien muon quan ly [3-20]: ");
        scanf("%d", &n);
        if(n>=3 && n<=20){
            break;
        }
    }

    //khai bao bien mang ds[] chua n-sinhvien
    // struct STUDENT ds[n];
    SINHVIEN ds[n];

    //vong lap nhap thong tin cua n-sinh vien
    for (int i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\n nhap thong tin sv thu %d: \n", i+1);
        printf("  nhap ma so: ");  gets(ds[i].id);
        printf("  nhap ho ten: ");  gets(ds[i].name);
        printf("  nhap ngay thang nam sinh: \n");  
        printf("     ngay: ");scanf("%d",&ds[i].birthday.dd);
        printf("     thang: ");scanf("%d",&ds[i].birthday.mm);
        printf("     nam: ");scanf("%d",&ds[i].birthday.yy);
        printf("  nhap diem ket qua: ");scanf("%d",&ds[i].mark);
    }
    
    //vong lap in ra danh sach sinh vien
    printf("\n\n Danh sach sinh vien \n");
    for (int i = 0; i < n; i++)
    {
        printf(" %4s %-20s %02d-%02d-%4d %3d \n", ds[i].id, ds[i].name, 
        ds[i].birthday.dd, ds[i].birthday.mm, ds[i].birthday.yy,
        ds[i].mark);
    }

}