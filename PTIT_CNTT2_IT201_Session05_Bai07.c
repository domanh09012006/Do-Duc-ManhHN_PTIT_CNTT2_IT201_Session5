#include<stdio.h>
int fibonaci(int arr[], int n, int start) {
    if (start>n) {
        return 0;
    }
    if (start == 0) {
        arr[start] = 0;
    }else if (start == 1) {
        arr[start] = 1;
    }else {
        arr[start] = arr[start-1] + arr[start-2];
    }
    return fibonaci(arr, n, start+1);
}
int main() {
    int n;
    printf("Nhap so luong so fibonaci can in: ");
    scanf("%d", &n);
    int arr[n];
    fibonaci(arr, n, 0);
    for (int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}