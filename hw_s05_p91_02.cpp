#include <stdio.h>
#include <stdlib.h>

//chuong trinh doi dv do luong tu cm -> inch va feet
int main(){

    system("cls");
    int cm;
    float inch, feet;

    printf(" CT doi don vi tinh tu cm -> inches, feet \n");
    printf(" >> nhap vao do dai (cm): ");
    scanf("%d", &cm);

    inch = cm/2.54;
    feet = inch/12;  // <=> cm /(2.54*12)
    printf("==================\n");
    printf(" => %d cm = %f inch \n",cm, inch);
    printf(" => %d cm = %f feet \n",cm, feet);

}