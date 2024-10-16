#include <stdio.h>
#include<stdbool.h>

int main() {
    int c1;
    printf("Enter a number: ");
    scanf("%d", &c1);
    int arr[c1];
    int i = 0;
    while (i < c1) {
        printf("Enter array elements: ");
        scanf("%d", &arr[i]);
        i++;
    }
    bool flag = true;
    int k = 0;
    while (k < c1) {
        if (arr[k] == 0 || arr[k] == 1) {
            flag = true;
        } else {
            flag = false;
        }
        k++;
    }
    if (flag == true) {
        int p1;
        printf("Enter a position: ");
        scanf("%d", &p1);
        if (p1-1 >= 0 && p1-1 < c1) {
            if (arr[p1-1] == 0) {
                arr[p1-1] = 1;
            } else if (arr[p1-1] == 1) {
                arr[p1-1] = 0;
            };
            int q1 = 0;
            while (q1 < c1) {
                printf("%d ", arr[q1]);
                q1++;
            }
            printf("\n");

        } else {
            printf("Out of range\n");
        }
    }

    return 0;
}