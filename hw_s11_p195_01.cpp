#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//chuong trinh sap xep bang danh sach ten sinh vien
int main(){
    system("cls");
    int n;
    while (1==1)
    {
        printf(" nhap so luong sinh vien [3-20]: ");
        scanf("%d", &n);
        if(n>=3 && n<=20){
            break;
        }
    }

    //khai bao mang chuoi (toi da 30 kt) chua ten cua n-sinh vien
    char tensv[n][31];

    //vong lap cho nhap ten cua n-sinh vien
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        printf(" nhap ten sv thu %d: ", i+1);
        gets(tensv[i]);
    }
    
    //vong lap in ra danh sach ten sinh vien
    printf("\n Danh sach ten sinh vien \n");
    for (int i = 0; i < n; i++)
    {
        printf("%\t %s\n", tensv[i]);
    }
    
    //sap xep lai bang danh sach ten sinh vien theo thu tu alphabeta
    char tam[31];   //bien tam su dung cho viec hoan doi gia tri
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            /* so sanh tensv dong i voi tensv dong j */
            if(strcmp(tensv[i], tensv[j])>0){
                //hoan doi vi tri cua 2 dong nay
                strcpy(tam, tensv[i]);
                strcpy(tensv[i], tensv[j]);
                strcpy(tensv[j], tam); 
            }
        }
    }

    //vong lap in ra danh sach ten sinh vien sau khi duoc xep thu tu
    printf("\n Danh sach ten sinh vien (theo thu tu A-Z) \n");
    for (int i = 0; i < n; i++)
    {
        printf("%\t %s\n", tensv[i]);
    }
    
}