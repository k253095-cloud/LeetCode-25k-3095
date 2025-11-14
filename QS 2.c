#include <stdio.h>

void shuffleArray(int* nums, int n, int* result) {
    for (int i = 0; i < n; i++) {
        result[2*i] = nums[i];       // xi
        result[2*i + 1] = nums[n+i]; // yi
    }
}

int main() {
    int nums[] = {2, 5, 1, 3, 4, 7};
    int n = 3;
    int result[2*n];

    shuffleArray(nums, n, result);

    printf("Shuffled array: ");
    for (int i = 0; i < 2*n; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

