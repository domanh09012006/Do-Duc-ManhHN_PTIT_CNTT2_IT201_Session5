#include<stdio.h>
int printfNum(int n) {

    if (n==0) return ;
        printfNum(n-1);
        printf("%d ", n);

}
int main() {
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    if (n<=0) {
        printf("Phai nhap so nguyen duong!");

    }else {
        printf("Cac so tu 1 den %d la: ", n);
        printfNum(n);
    }
    return 0;
}