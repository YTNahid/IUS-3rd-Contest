// https://codeforces.com/problemset/problem/1742/A
#include <stdio.h>
 
int main() {

    int a;
    scanf("%d", &a);

    int arr[a], i, j, swap;

    for(i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < a-1; i++) {
        for(j = i+1; j < a; j++) {
            if(arr[i] > arr[j]) {
                swap = arr[i];
                arr[i] = arr[j];
                arr[j] = swap;
            }
        }
    }

    for(i = 0; i < a; i++) {
        printf("%d ", arr[i]);
    }
}
