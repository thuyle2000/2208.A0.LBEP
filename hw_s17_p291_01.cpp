#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//kiem tra chuoi thu 1 co xuat hien cuoi chuoi thu 2 ?
int main(){
    system("cls");

    char s1[80], s2[80];
    int n1,n2, n;
    printf(" nhap chuoi ky tu thu 1: ");
    gets(s1);

    printf(" nhap chuoi ky tu thu 2: ");
    gets(s2);

    //kiem tra chuoi 1 co xuat hien trong chuoi 2 ko ?
    if(strstr(s2, s1)){
        n = strstr(s2,s1)- s2; //vi tri xuat hien cua s1 trong s2
        n1 = strlen(s1);       //do dai cua s1 
        n2 = strlen(s2);       //do dai cua s2
        if(n== (n2-n1)){
            printf(" >>> chuoi [%s] xuat hien tai cuoi chuoi [%s]\n", s1, s2);
        }
        else{
            printf(" >>> chuoi [%s] xuat hien trong chuoi [%s] tai vi tri [%d] \n", s1, s2, n);
        }
    }
    else{
        printf(" >> chuoi [%s] ko xuat hien trong chuoi [%s] \n", s1, s2);
    }
}