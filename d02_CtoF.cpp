#include <stdio.h>
#include <stdlib.h>
//doi nhieu do C -> nhiet do F
int main(){
    float C, F;
    system("cls");
    
    printf(" nhap do C: ");
    scanf("%f", &C);

    F = C*9/5 + 32;

    printf("\n %.2f do C <=> %.2f do F \n",C, F);
}
