#include <stdio.h>
#include <stdlib.h>

//demo vong lap for co ban - version 3: user nhap vao chuoi thong bao va so lan in
int main(){
    system("cls");

    char message[81];
    printf(" vui long nhap noi dung thong bao: ");
    gets(message);

    int n;
    printf(" vui long nhap so lan muon in thong bao: ");
    scanf("%d" , &n);

    for (int i = 0; i < n; i++)
    {
        printf(" %3d. %s \n", i+1, message);
    }
    
    printf("\n >> FINISHED ! << \n");
}