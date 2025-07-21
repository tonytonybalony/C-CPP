#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int totalSize = nums1Size + nums2Size;
    int half = totalSize / 2;
    int *merged = (int *)malloc(totalSize * sizeof(int));
    if (merged == NULL) {
        return 0.0; // Handle memory allocation failure
    }

    int i = 0, j = 0, k = 0;
    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }
    while (i < nums1Size) {
        merged[k++] = nums1[i++];
    }
    while (j < nums2Size) {
        merged[k++] = nums2[j++];
    }

    double median;
    if (totalSize % 2 == 0) {
        median = (merged[half - 1] + merged[half]) / 2.0;
    } else {
        median = merged[half];
    }

    free(merged);
    return median;
}

int main() {
    int nums1[] = {1, 3};
    int nums2[] = {2};
    double median = findMedianSortedArrays(nums1, 2, nums2, 1);
    printf("Median: %f\n", median);
    return 0;
}