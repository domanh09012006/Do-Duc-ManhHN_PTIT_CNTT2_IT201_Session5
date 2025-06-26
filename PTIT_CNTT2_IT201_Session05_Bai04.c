#include<stdio.h>
int sum(int start, int end) {
    if (start>=end) {
        return end;
    }
    return start + sum(start+1, end);
}
int main() {
    int start, end;
    printf("Nhap gia tri bat dau: ");
    scanf("%d", &start);
    printf("Nhap gia tri ket thuc: ");
    scanf("%d", &end);
    if (start<0 || end<0 || start>end) {
        printf("Gia tri khong hop le!");
        return 1;
    }
    int result = sum(start, end);
    printf("%d ", result);
    return 0;
}