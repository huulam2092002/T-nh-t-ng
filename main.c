#include <iostream>
#include<stdio.h>
#include "utils/Sum_evenN.h"
using namespace std;
int main(){
    FILE *fp;
    FILE *fo;
    fp=fopen("input.txt","r");
    int s,N;
    getw(N,(FILE*)fp);
    printf("Nhap vao so nguyen N: %d",N);
    scanf("%d",&N);
    printf("Tong cac so chan la Sum= %d",sum_N(N));
    fo=fopen("output.txt","w");
    putw(sum_N(N),fo);
    fclose(fo);
    fclose(fp);
   
    return 0;
}