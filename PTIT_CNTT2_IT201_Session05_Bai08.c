#include<stdio.h>
#include<string.h>
int number(char str[]) {
    int i= 0;
    if (str[0] == '\0') return 0;
    while (str[i] != '\0') {
        if (str[i]<'0'||str[i]>'9') {
            return 0;
        }
        i++;
    }
    return 1;
}
int toString(char str[]) {
    int i=0;
    int num = 0;
    while (str[i] != '\0') {
        num = num*10+(str[i] - '0');
        i++;
    }
    return num;
}
int sum(int n) {
    if (n==0) return 0;
    return n+sum(n-1);
}
int main() {
    char str[100];
    printf("Nhap 1 so :");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = 0;
    if (!number(str)) {
        printf("Khong hop le!");
        return 0;
    }
    int n = toString(str);
    if (n<=0) {
        printf("Khong hop le!");
    }else {
        int tong = sum(n);
        printf("tong tu 1 den %d la: %d",n,tong );
    }
    return 0;
}