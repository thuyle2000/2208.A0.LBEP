#include <stdio.h>
#include <stdlib.h>

//chuong trinh nhap chieu dai, rong cua hcn va tinh dien tich, chu vi
int main(){
    system("cls");
    
    //khai bao bien bo nho chua chieu dai va chieu rong
    float dai, rong;

    printf(" >> vui long nhap chieu dai cua HCN: ");
    scanf("%f", &dai);

    printf(" >> vui long nhap chieu rong cua HCN: ");
    scanf("%f", &rong);    

    //in ra dien tich va chu vi cua hinh CN
    printf(" => Dien tich = %f \n", dai*rong );

    printf(" => Chu vi = %f \n", (dai+rong)*2 );
}