int jump(int* nums, int numsSize) {
    int jumps = 0;
    int current = 0;
    int farthest = 0;

    for(int i = 0; i < numsSize - 1; i++){
        farthest = fmax(farthest, i + nums[i]);
        if(i == current){
            jumps++;
            current = farthest;
            if(current >= numsSize-1) break;
        }
    }
    
    return jumps;
}