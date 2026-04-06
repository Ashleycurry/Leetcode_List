int majorityElement(int* nums, int numsSize) {
    int count = 1;
    int lock = nums[0];
    for(int i = 1; i < numsSize; i++){
        if(count == 0){
            lock = nums[i];
            count = 1;
        } else if(nums[i] == lock){
            count++;
        } else {
            count--;
        }
    }
    return lock;
}