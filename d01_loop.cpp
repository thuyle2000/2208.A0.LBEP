#include <stdio.h>
#include <stdlib.h>

int main(){
    system("cls"); // xoa ma hinh

    printf("nhap vao so lan muon thi hanh: ");
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n E hoc lap trinh lan thu %d ...", i+1);
    }
}