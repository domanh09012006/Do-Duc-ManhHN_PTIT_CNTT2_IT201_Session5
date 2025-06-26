#include<stdio.h>
#include<string.h>
int doixung(char arr[], int left, int right) {
    if (left>=right) {
        return 1;
    }
    if (arr[left] !=arr[right]) {
        return 0;
    }
    return doixung(arr, left+1, right-1);
}
int main() {
    char arr[100];
    printf("Nhap chuoi bat ki: ");
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = 0;
    int length = strlen(arr);
    int value = doixung(arr, 0, length-1);
    if (value == 0 ) {
        printf("Chuoi khong doi xung");
    }else {
        printf("Chuoi doi xung");
    }
    return 0;
}