#include <stdio.h>
#include <stdlib.h>

//demo vong lap for co ban - version 2 : user nhap vao so lan in thong bao
int main(){
    system("cls");

    int n;
    printf(" vui long nhap so lan muon in thong bao: ");
    scanf("%d" , &n);

    //in thong bao 'Lap trinh C qua de !' 10 lan 
    for (int i = 0; i < n; i++)
    {
        printf(" %3d. Lap trinh C qua de !\n", i+1);
    }
    
    printf("\n >> FINISHED ! << \n");
}