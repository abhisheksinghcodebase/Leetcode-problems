int* runningSum(int* nums, int numsSize, int* returnSize) {
    int* result = (int*)malloc(numsSize * 4);

    result[0] = nums[0];

    int i = 1;
    while(i<numsSize){
        result[i] = result[i - 1] + nums[i];
        i++;
    }

    *returnSize = numsSize;

    return result;
}