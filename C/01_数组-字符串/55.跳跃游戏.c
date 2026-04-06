#include <stdbool.h>
bool canJump(int* nums, int numsSize) {
    int maxposition = 0;
    for(int i = 0; i < numsSize && maxposition < numsSize - 1; i++){
        if(maxposition < i){
            return false;
        }
        maxposition = fmax(maxposition, i + nums[i]);
    }
    return true;
}