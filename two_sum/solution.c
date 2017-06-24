#include <stdio.h>

int main(int argc, char* argv[]) {
	int* nums = {2,7,5,8};
	int numsSize = nums.length;
	int target = 9;
	int* value = (int*)malloc(2*sizeof(int));
	value = twoSum(nums, numsSize, target);
	printf("%i,%i",value[0],value[1]);
	free(value);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    int* value;
    value = (int*)malloc(2*sizeof(int));
    for(int i=0;i<numsSize;i++) {
        for(int j=i+1;j<numsSize;j++) {
            if((nums[i] + nums[j]) == target) {
                value[0] = i;
                value[1] = j;
            }
        }
    }
    return value;
}