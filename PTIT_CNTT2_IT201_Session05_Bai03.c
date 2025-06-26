#include<stdio.h>
int giaithua(int n) {
    if (n==0) {
        return 1;
    }
    return n*giaithua(n-1);
}
int main() {
    int k;
    printf("Nhap 1 so nguyen: ");
    scanf("%d", &k);
    int value = giaithua(k);
    printf("%d", value);
    return 0;
}
