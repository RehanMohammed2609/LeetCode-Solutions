void moveZeroes(int* nums, int numsSize) {
    int pos = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[pos];
            nums[pos] = nums[i];
            nums[i] = temp;

            pos++;
        }
    }
}