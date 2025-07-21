#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }
    *returnSize = 0;
    return NULL;
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* indices = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);
    
    if (returnSize == 2) {
        printf("Indices: %d, %d\n", indices[0], indices[1]);
        free(indices);
    } else {
        printf("No two sum solution found.\n");
    }
    
    return 0;
}