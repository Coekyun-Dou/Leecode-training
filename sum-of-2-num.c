#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int n, int target, int* returnSize) {
    // 动态分配返回的数组
    int* result = (int*)malloc(2 * sizeof(int));
    if (result == NULL) {
        *returnSize = 0; // 失败时返回 0
        return NULL;
    }
    int i = 0;
    for (int i = 0; i < n; i++) {
        for (int m = i + 1; m < n; m++) {
            if (nums[i] + nums[m] == target) {
                result[0] = i;
                result[1] = m;
                *returnSize = 2; // 返回两个索引
                return result;
            }
        }
    }
    
    *returnSize = 0; // 没有找到时返回大小 0
    return NULL;
}

int main() {
    int n = 0;
    printf("please input the length of nums[]\n");
    scanf("%d", &n);

    int target = 0;
    printf("please input the number of target\n");
    scanf("%d", &target);

    int* nums = (int*)malloc(n * sizeof(int)); // 动态分配 nums 数组
    if (nums == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("please input the number in nums\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int returnSize = 0;
    int* result = twoSum(nums, n, target, &returnSize);
    if (result != NULL) {
        printf("Indices: %d %d\n", result[0], result[1]);
        free(result); // 释放 result 数组
    } else {
        printf("No solution found\n");
    }

    free(nums); // 释放 nums 数组
    return 0;
}

