int removeDuplicates(int* nums, int numsSize) {
    int slow = 0;
    for(int fast = 1; fast < numsSize; fast++){
        if(nums[slow] != nums[fast]){
            slow++;
            nums[slow] = nums[fast];
        }
    }
    return slow + 1;
}