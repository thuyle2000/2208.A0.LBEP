#include <stdio.h>
#include <stdlib.h>

//chuong trinh demo cau truc lenh if-else-if:
// xep loai sinh vien theo diem kq
int main(){
    system("cls");

    int diemKQ;
    printf(" nhap diem ket qua: ");
    scanf("%d", &diemKQ);

    //tien hanh kiem tra diem KQ va phan loai
    if(diemKQ>=0 && diemKQ<=100){
        //diem hop le
        if(diemKQ>=85){
            printf(" >> Xuat sac !");   // diem KQ [100-85]
        }
        else if(diemKQ >= 80){
            printf(" >> Gioi !");       // diem KQ [84-80]
        }
        else if(diemKQ >=70){
            printf(" >> Kha !");        // diem KQ [79-70]
        }
        else if(diemKQ >=50){
            printf(" >> Trung Binh !"); // diem KQ [69-50]
        }
        else{
            printf(" >> CHUA DAT YEU CAU !!!");     // diemKQ  [49-0]
        }
    }
    else{
        printf(" Xin loi, diem nhap ko hop le !!! [0-100]");
    }
}