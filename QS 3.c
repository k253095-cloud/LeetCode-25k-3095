#include <stdio.h>

void sortArray(int* arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void transformArray(int* nums, int n) {
    
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 0)
            nums[i] = 0;
        else
            nums[i] = 1;
    }

    
    sortArray(nums, n);
}

int main() {
    int nums[] = {4, 3, 2, 1};
    int n = sizeof(nums)/sizeof(nums[0]);

    transformArray(nums, n);

    printf("Transformed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}

